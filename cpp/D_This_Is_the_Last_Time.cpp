#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define test(t) \
    int t;      \
    cin >> t;   \
    while (t--)
#define MOD 1000000007
#define MOD1 998244353
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(vec) vec.begin(), vec.end()
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int
bool comp(const vector<int> &a, const vector<int> &b)
{
    return a[0] < b[0];
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> cas(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        cin >> cas[i][0] >> cas[i][1] >> cas[i][2];
    }
    sort(all(cas), comp);
    ll ct = k;
    int idx = 0;
    priority_queue<ll> pq;
    while (1)
    {
        while (idx < n && cas[idx][0] <= ct)
        {
            pq.push(cas[idx][2]);
            idx++;
        }
        while (!pq.empty() && pq.top() <= ct)
        {
            pq.pop();
        }
        if (pq.empty()){
            break;
            // debug(ct);
        }
        ct = pq.top();
        // debug(ct);
        pq.pop();
    }
    cout << ct << endl;
}
int main()
{
    op();
    test(t)
    {
        solve();
    }
    return 0;
}
