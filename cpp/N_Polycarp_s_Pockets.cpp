#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
	cin >> n;
	vector<int> cnt(101);
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		cnt[x]++;
	}
	cout << *max_element(cnt.begin(), cnt.end()) << endl;
    return 0;
}