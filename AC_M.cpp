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
int dig(int k){
    string k1 = "aaaa";
    while (k1.length()!=1)
    {
        string p = to_string(k);
        int sum = 0;
        for (int i = 0; i < p.length(); i++)
        {
            sum += (p[i] - '0');
        }
        k1 = to_string(sum);
        k = sum;
    }
    return k;
}
void solve()
{
    int n;
    vector<pair<int, int>> x;
    while (cin >> n)
    {
        x.pb({dig(n), n});
    }
    sort(all(x));
    for(auto v:x){
        cout << v.ss << " ";
    }
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}