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
int main()
{
    op();
    int n, k;
    cin >> n >> k;

    vector<pair<string, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b)
         { return a.second < b.second; });

    vector<pair<string, int>> ay(k);
    for (int i = 0; i < k; i++)
    {
        ay[i] = v[i];
    }

    sort(ay.begin(), ay.end(), [](pair<string, int> a, pair<string, int> b)
         { return a.first < b.first; });

    for (auto u : ay)
    {
        cout << u.first << "\n";
    }

    return 0;
}