#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

// --- Structures ---
struct Link {
    int m, p1, p2;
};

struct F {
    int id;
    int u, lu, v, lv;
};

struct P {
    int g, s, k;
};

// --- Globals ---
int N, S, L, M, K, P_val;
int R;
int sp_per_p;
int ox_per_p;

// --- Helper to map OXC port to Group/Spine ---
P get_p(int m, int p_idx) {
    int g = p_idx / (sp_per_p * K);
    int rem = p_idx % (sp_per_p * K);
    int s_loc = rem / K;
    int k = rem % K;
    int pl = m / ox_per_p;
    int s_glob = s_loc + pl * sp_per_p;
    return {g, s_glob, k};
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    if (!(cin >> N >> S >> L)) return 0;
    if (!(cin >> M >> K >> P_val)) return 0;

    sp_per_p = S / P_val;
    ox_per_p = M / P_val;  R = N * sp_per_p * K;

    // Physical connections state: adj[OXC_ID][PORT] = CONNECTED_PORT
    vector<vector<int>> adj(M, vector<int>(R, -1));

    int T = 5; // 5 Queries as per problem
    while (T--) {
        int Q;
        if (!(cin >> Q)) break;

        vector<F> flows(Q);
        // d_list[GroupA][GroupB] stores list of flow IDs
        vector<vector<vector<int>>> d_list(N, vector<vector<int>>(N));

        for (int i = 0; i < Q; ++i) {
            flows[i].id = i;
            cin >> flows[i].u >> flows[i].lu >> flows[i].v >> flows[i].lv;
            // Store flow requirement
            d_list[flows[i].u][flows[i].v].push_back(i);
        }

        vector<vector<pair<int, int>>> keep(N * N);
        vector<vector<pair<int, int>>> spare(N * N);

        // --- 1. Analyze Existing Topology (Stability) ---
        vector<vector<bool>> is_free(M, vector<bool>(R, true));

        for (int m = 0; m < M; ++m) {
            for (int p = 0; p < R; ++p) {
                if (adj[m][p] != -1) {
                    int neighbor = adj[m][p];
                    // Only process each link once (when p < neighbor)
                    if (p < neighbor) {
                        P info1 = get_p(m, p);
                        P info2 = get_p(m, neighbor);
                        int g1 = info1.g;
                        int g2 = info2.g;

                        // Check if this existing link is useful for current demand
                        bool stored = false;
                        if (!d_list[g1][g2].empty()) {
                            keep[g1 * N + g2].push_back({m, p});
                            stored = true;
                        } else if (!d_list[g2][g1].empty()) {
                            keep[g2 * N + g1].push_back({m, p});
                            stored = true;
                        }

                        if (!stored) {
                            spare[g1 * N + g2].push_back({m, p});
                        }
                    }
                    is_free[m][p] = false;
                }
            }
        }

        // --- 2. Calculate Demand & Targets ---
        // Simple heuristic: Spread load evenly across total capacity
        double avg_load = (double)Q / (double)(M * R / 2);
        if (avg_load < 1.0) avg_load = 1.0;

        vector<pair<int, int>> pairs;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (!d_list[i][j].empty()) pairs.push_back({i, j});
            }
        }

        // Sort pairs by demand (handle highest demand first)
        sort(pairs.begin(), pairs.end(), [&](pair<int, int> a, pair<int, int> b) {
            return d_list[a.first][a.second].size() > d_list[b.first][b.second].size();
        });

        // 3D Vector to store assigned links: [GroupA][GroupB] -> List of Links
        vector<vector<vector<Link>>> assigned(N, vector<vector<Link>>(N));

        vector<Link> global_spares;
        for (int i = 0; i < N * N; ++i) {
            for (auto &x : spare[i]) {
                int m = x.first;
                int p1 = x.second;
                int p2 = adj[m][p1];
                global_spares.push_back({m, p1, p2});
            }
        }

        // --- 3. Allocation Phase 1: Keep useful existing links ---
        for (auto &pr : pairs) {
            int u = pr.first;
            int v = pr.second;
            int dem = d_list[u][v].size();
            int target = ceil(dem / avg_load);

            int idx = u * N + v;
            int taken = 0;

            for (auto &k_link : keep[idx]) {
                if (taken < target) {
                    int m = k_link.first;
                    int p1 = k_link.second;
                    int p2 = adj[m][p1];
                    assigned[u][v].push_back({m, p1, p2});
                    taken++;
                } else {
                    // If we have more existing links than needed, move to global spares
                    int m = k_link.first;
                    int p1 = k_link.second;
                    int p2 = adj[m][p1];
                    global_spares.push_back({m, p1, p2});
                }
            }
        }

        // Reset adjacency map to rebuild it cleanly
        for (int m = 0; m < M; ++m) fill(adj[m].begin(), adj[m].end(), -1);
        for (int m = 0; m < M; ++m) fill(is_free[m].begin(), is_free[m].end(), true);

        // Re-apply the "Assigned" links to the map
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                for (auto &l : assigned[i][j]) {
                    adj[l.m][l.p1] = l.p2;
                    adj[l.m][l.p2] = l.p1;
                    is_free[l.m][l.p1] = false;
                    is_free[l.m][l.p2] = false;
                }
            }
        }

        // --- 4. Allocation Phase 2: Create New Links ---
        for (auto &pr : pairs) {
            int u = pr.first;
            int v = pr.second;
            int dem = d_list[u][v].size();
            int target = ceil(dem / avg_load);
            int cur = assigned[u][v].size();

            if (cur >= target) continue;

            int start_m = 0;
            for (int m_off = 0; m_off < M && cur < target; ++m_off) {
                int m = (start_m + m_off) % M;

                // Determine port ranges for Group U and Group V
                int u_start = u * (sp_per_p * K);
                int u_end = u_start + (sp_per_p * K);
                int v_start = v * (sp_per_p * K);
                int v_end = v_start + (sp_per_p * K);

                int p_u = -1, p_v = -1;

                // Find free ports
                for (int k = u_start; k < u_end; ++k) {
                    if (is_free[m][k]) { p_u = k; break; }
                }
                if (p_u == -1) continue;

                for (int k = v_start; k < v_end; ++k) {
                    if (is_free[m][k]) { p_v = k; break; }
                }
                if (p_v == -1) continue;

                // Connect
                adj[m][p_u] = p_v;
                adj[m][p_v] = p_u;
                is_free[m][p_u] = false;
                is_free[m][p_v] = false;
                assigned[u][v].push_back({m, p_u, p_v});
                cur++;
            }
        }

        // --- 5. Allocation Phase 3: Restore Unused Spares (Minimize Cost) ---
        // If a spare link wasn't cannibalized for a new connection, put it back
        for (auto &sp : global_spares) {
            if (is_free[sp.m][sp.p1] && is_free[sp.m][sp.p2]) {
                adj[sp.m][sp.p1] = sp.p2;
                adj[sp.m][sp.p2] = sp.p1;
                is_free[sp.m][sp.p1] = false;
                is_free[sp.m][sp.p2] = false;
            }
        }

        // --- Output 1: OXC Topologies ---
        for (int m = 0; m < M; ++m) {
            for (int r = 0; r < R; ++r) {
                cout << adj[m][r] << (r == R - 1 ? "" : " ");
            }
            cout << "\n";
        }

        // --- Output 2: Routing Paths ---
        vector<vector<int>> route_out(Q);
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (d_list[i][j].empty()) continue;
                auto &links = assigned[i][j];

                if (links.empty()) {
                    // Fallback (should not happen with valid inputs)
                    for (int flow_idx : d_list[i][j]) {
                        route_out[flow_idx] = vector<int> {0, 0, 0, 0, 0};
                    }
                    continue;
                }

                // Round-Robin distribution of flows across assigned links
                int l_idx = 0;
                for (int flow_idx : d_list[i][j]) {
                    auto &lnk = links[l_idx];
                    l_idx = (l_idx + 1) % links.size();

                    P pu = get_p(lnk.m, lnk.p1);
                    P pv = get_p(lnk.m, lnk.p2);

                    int sA, kA, sB, kB;
                    // Ensure source spine matches Group i
                    if (pu.g == i) {
                        sA = pu.s; kA = pu.k;
                        sB = pv.s; kB = pv.k;
                    } else {
                        sA = pv.s; kA = pv.k;
                        sB = pu.s; kB = pu.k;
                    }
                    route_out[flow_idx] = vector<int> {sA, kA, lnk.m, sB, kB};
                }
            }
        }

        for (int i = 0; i < Q; ++i) {
            cout << route_out[i][0] << " " << route_out[i][1] << " "
                 << route_out[i][2] << " " << route_out[i][3] << " "
                 << route_out[i][4] << "\n";
        }
    }
    return 0;
}