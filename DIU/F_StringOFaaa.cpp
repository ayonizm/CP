#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n, q;
    cin >> n >> q;
    vector<ll> ar(n + 1, 0);
    for (int i = 1; i <= n; i++){
        ar[i] = ar[i - 1] + i;
    }

    while (q--) {
        ll x;
        cin >> x;
        int left = 1;
        int right = n;
       int ans = 0;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (ar[mid] >= x) {
                ans = mid;
                right = mid - 1;
            } else if(ar[mid]<x) {
                ans = mid;
                left = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
