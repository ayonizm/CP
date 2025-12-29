#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

using ld = long double;

void champ()
{
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    int sr = -1, sc = -1; // starting position
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '$')
            {
                sr = i;
                sc = j;
            }
        }
    }
    // যদি starting position আগে থেকেই boundary তে হয়
    if (sr == 0 || sr == n - 1 || sc == 0 || sc == m - 1)
    {
        cout << 1 << "\n"; // এক স্টেপে বাইরে
        return;
    }
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int, int>> q;
    q.push({sr, sc});
    dist[sr][sc] = 0;
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};
    while (!q.empty())
    {
        auto [r, c] = q.front();
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            int nr = r + dr[k];
            int nc = c + dc[k];
            if (nr < 0 || nr >= n || nc < 0 || nc >= m)
                continue;
            if (grid[nr][nc] == '#' || dist[nr][nc] != -1)
                continue;
            dist[nr][nc] = dist[r][c] + 1;
            // boundary cell পেলে
            if (nr == 0 || nr == n - 1 || nc == 0 || nc == m - 1)
            {
                cout << dist[nr][nc] + 1 << "\n"; // বাইরে বের হতে +1
                return;
            }
            q.push({nr, nc});
        }
    }
    // কোনো পথ নেই
    cout << -1 << "\n";
}