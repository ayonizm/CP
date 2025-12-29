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
void solve()
{
    int n;
    cin >> n;
    vector<int> x;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
        mn = min(mn, t);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     x[i] -= mn;
    // }
    int m;
    cin >> m;
    while (m--)
    {

        string s;
        cin >> s;
        map<ll, char> q1;
        map<char, ll> q2;
        if(s.length()!=x.size()){
            cout << "NO" << endl;
            continue;
        }
        int ok = 0;
        for (int i = 0; i < s.length(); i++)
        {
            // debug(q1.size());
            // debug(q2.size());
            if(q1.count(x[i])&&q1[x[i]]!=s[i]){
                cout << "NO" << endl;
                ok = 1;
                break;
            }
            if(q2.count(s[i])&&q2[s[i]]!=x[i]){
                // debug(ok);
                cout << "NO" << endl;
                ok = 1;
                break;
            }
            q1[x[i]] = s[i];
            q2[s[i]] = x[i];
        }
        if(ok){
            continue;
        }
        
        cout << "YES" << endl;
    }
}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    test(t)
    {
        solve();
    }
    return 0;
}