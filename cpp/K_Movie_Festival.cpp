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
bool com(pair<int,int>x,pair<int,int>y){
    return x.second < y.second;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> x;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        x.pb({a, b});
    }
    sort(all(x),com);
    int ct = 0;
    int l = x[0].second;
    for (int i = 1; i < n; i++)
    {
        if(x[i].first>=l){
            ct++;
            l = x[i].second;
        }
    }
    cout << ++ct << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}