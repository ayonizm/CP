const int N = 1e5 + 5;
vector<int> graph[N], revGraph[N];
vector<bool> visited(N);
stack<int> finishOrder;

void dfs1(int node)
{
    visited[node] = true;
    for (int child : graph[node])
        if (!visited[child])
            dfs1(child);
    finishOrder.push(node);
}

void dfs2(int node)
{
    visited[node] = true;
    for (int child : revGraph[node])
        if (!visited[child])
            dfs2(child);
}
void champ()
{
    int n, m;
    cin >> n >> m;

    // Clear data for new test case
    for (int i = 1; i <= n; ++i)
    {
        graph[i].clear();
        revGraph[i].clear();
        visited[i] = false;
    }
    finishOrder = stack<int>();

    // Read edges
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        revGraph[v].push_back(u);
    }

    // Step 1: DFS on original graph
    for (int i = 1; i <= n; ++i)
        if (!visited[i])
            dfs1(i);

    // Step 2: DFS on transpose graph
    visited.assign(n + 1, false);
    int sccCount = 0;
    while (!finishOrder.empty())
    {
        int node = finishOrder.top();
        finishOrder.pop();
        if (!visited[node])
        {
            dfs2(node);
            ++sccCount;
        }
    }

    cout << sccCount << '\n';
}

vector<int>segsiv(ll l,ll r){
    vector<int> x;
    //////
    x.push_back(i + l);
    return x;
}