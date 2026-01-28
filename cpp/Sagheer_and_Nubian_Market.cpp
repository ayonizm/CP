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
void solve() {
    ll n, ay;
    cin >> n >> ay;
    vector<ll> a1(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a1[i];
    }

    ll l = 0;
    ll r = n;
    ll k = 0;
    ll c = 0;

    while (l <= r) {
        ll m = l + (r - l) / 2;
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i) {
            a[i] = a1[i] + (i + 1) * m;
        }
        sort(a.begin(), a.end());
        ll t = 0;
        for (ll i = 0; i < m; ++i) {
            t += a[i];
            if (t > ay) {
                break;
                ;
                ;
                ;
                ;
                ;
                ;
                ;
                ;
                ;
                ;
                ;
                ;
                ;
                ;
                ;
                ;
        
            }
        }
        if (t <= ay) {
            k = m;
            c = t;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    cout << k << " " << c << endl;
}

int main() {
    solve();
    return 0;
}