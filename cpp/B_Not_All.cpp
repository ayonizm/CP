//************************************************************
//  █████  ██    ██   ██████   ███    ██ |
// ██   ██ ██    ██  ██    ██  ████   ██ |
// ███████   ████    ██    ██  ██ ██  ██ |
// ██   ██    ██     ██    ██  ██  ██ ██ |
// ██   ██    ██      ██████   ██   ████ |
// ************************************************************/
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
    int a, b;
    cin >> a >> b;
    map<int, int> x;
    vector<pair<int,int>> l;
    for (int i = 0; i < a; i++)
    {
        int p;
        cin >> p;
        x[p]++;
        l.push_back({p,x[p]});
    }
    if(x.size()!=b){
        cout << 0 << endl;
        return;
    }
    int ct = 0;
    for (int i = l.size()-1; i >=0; i--)
    {
        if(l[i].second>1){
            ct++;
        }
    }
    cout << ct << endl;
}
int main()
{
    op();
    solve();
    return 0;
}