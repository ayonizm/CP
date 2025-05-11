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
int bin(ll n)
{
    if (n < 10){
        return n;
    }
    return 1 + (n - 1) % 9;
}

bool compo(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    if (a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}

int main()
{
    op();
    int n;
    vector<pair<ll, ll>> ay;
    while (cin >> n)
    {
        int x = bin(n);
        ay.pb({n, x});
    }
    sort(all(ay), compo);
    for (auto l : ay)
    {
        cout << l.first << " ";
    }
    return 0;
}