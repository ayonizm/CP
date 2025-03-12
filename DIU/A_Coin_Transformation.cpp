#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
ll ma(ll n) {
    if (n <= 3){
    return 1;
    } 
    return ma(n / 4) * 2; 
}
int main() {
    int t;
    cin >> t;
    vector<int> x;
    while (t--) {
        ll n;
        cin >> n;
        cout << ma(n) << endl;
    }
    return 0;
}
