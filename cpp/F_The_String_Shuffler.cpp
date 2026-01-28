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
ll fact(ll a)
{
    ll sum = 1;
    for (int i = 1; i <= a; i++)
    {
        sum *= i;
    }
    return sum;
}
void solve()
{
    string s;
    cin >> s;
    map<char, int> x;
    for (int i = 0; i < s.size(); i++)
    {
        x[s[i]]++;
    }
    ll su = 1;
    ll po = s.size();
    ll pr = fact(po);
    for (auto v : x)
    {
        su *= (fact(v.ss));
    }
    cout << pr / su << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}