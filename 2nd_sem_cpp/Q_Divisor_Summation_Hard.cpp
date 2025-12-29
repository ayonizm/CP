#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> os;

template <typename A> void _(const char *s, A&& a) { cout << s << " : " << a << endl; }
template <typename A, typename... B> void _(const char *s, A&& a, B&&... b) {
    const char *c = strchr(s + 1, ',');
    cout.write(s, c - s) << " : " << a << " | ";
    _(c + 1, b...);
}

#define END return 0;
#define ll long long
#define pb push_back
#define dbg(...) _(#__VA_ARGS__, __VA_ARGS__)
#define print(a) for (auto &x : a) cout << x << " "; cout << endl

const ll MX = 1e8;
bool p[MX];
vector<ll> prm;

void sv() {
    memset(p, true, sizeof(p));
    for (int i = 2; i < MX; i++) {
        if (p[i]) {
            for (int j = i * i; j < MX; j += i) p[j] = false;
        }
    }
    for (int i = 2; i < MX; i++) {
        if (p[i]) prm.pb(i);
    }
}

ll sod(ll n) {
    ll r = 1, s = sqrt(n);
    for (ll i = 0; i < prm.size() && prm[i] <= s; i++) {
        if (n % prm[i] == 0) {
            ll t = 1, p = 1;
            while (n % prm[i] == 0) {
                n /= prm[i];
                p *= prm[i];
                t += p;
            }
            s = sqrt(n);
            r *= t;
        }
    }
    if (n != 1) r *= (n + 1);
    return r;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    sv();
    while (t--) {
        ll a;
        cin >> a;
        cout << sod(a) - a << endl;
    }
    END
}
