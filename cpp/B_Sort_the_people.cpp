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
bool compare(const pair<string, pair<string, int>> &a, const pair<string, pair<string, int>> &b)
{
    if (a.ff != b.ff)
    {
        return a.ff < b.ff;
    }
    if (a.ss.ff != b.ss.ff)
    {
        return a.ss.ff < b.ss.ff;
    }
    
    return a.ss.ss > b.ss.ss;
}
int main()
{
    op();
    int n;
    cin >> n;
    string s1, s2;
    ll k;
    vector < pair<string, pair<string, ll >>> x;
    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> s2 >> k;
        x.push_back({s2, {s1, k}});
    }
    sort(all(x),compare);
    for(auto v:x){
        cout << v.second.first << " " << v.first << " " << v.second.second << endl;
    }
    
    return 0;
}