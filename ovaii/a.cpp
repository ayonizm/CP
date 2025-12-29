// Author: ayon6594
// Date: 2025-12-29
// Time: 20:56:34
#include <bits/stdc++.h>
using namespace std;
#define op() \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);
#define test(t) \
    int t; \
    cin >> t; \
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
vector<ll>ans;
void solve() {
	ll N = 1e6 + 10;
	ll i = 1;
	while (i < N) {
		ans.pb(i);
		i *= 2;
	}
}
// void mx(){

// }
// void min(){
void ok() {
	ll a, b;
	cin >> a >> b;
	ll x = a;
	ll y = b;
	ll h = 0;
	ll p = 1;
	while (1) {
		if (h % 2 == 0) {
			if (x >= p) {
				x -= p;
			} else {
				// debug(x);
				break;
			}
		} else {
			if (y >= p) {
				y -= p;
			} else {
				break;
			}
		}
		h++;
		// debug(p);
		p *= 2;
	}
	x = b;
	ll m = h;
	y = a;
	h = 0;
	p = 1;
	while (1) {
		if (h % 2 == 0) {
			if (x >= p) {
				x -= p;
			} else {
				// debug("ok");
				break;
			}
		} else {
			if (y >= p) {
				y -= p;
			} else {
				break;
			}
		}
		h++;
		p *= 2;
		// debug(p);
	}
	// debug(h);
	cout << max(h, m) << endl;
}
int main() {
	op();
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	// solve();
	while (t--) {
		ok();
	}
	return 0;
}
