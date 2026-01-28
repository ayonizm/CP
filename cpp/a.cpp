// Author: ayonizm
// Date: 2026-01-06
// Time: 23:03:09
#include <bits/stdc++.h>
using namespace std;
#define op() \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define all(vec) vec.begin(), vec.end()
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int
void solve() {
	ll a;
	cin >> a;
	vector<int>x;
	int ev = 0;
	int od = 0;
	ll sum = 0;
	for (int i = 0; i < a; ++i)
	{
		int t;
		cin >> t;
		x.pb(t);
		if (t % 2 == 0) {
			ev++;
		}
		else {
			od++;
		}
		sum += t;
	}
	if (sum % 2 != 0) {

		cout << "YES" << endl;
	}
	else {
		if (ev == 1 && od == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

}
int main() {
	op();
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
