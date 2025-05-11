#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll t;
    cin >> t;
  while(t--){
        ll k;
        cin >> k;
        vector<ll> dg;
        while (k > 0) {
            dg.push_back(k % 9);
            k /= 9;
        }
        reverse(dg.begin(), dg.end());
        for (ll i = 0; i < dg.size(); i++) {
            if (dg[i] < 4){
                char p1 = dg[i] + '0';
                cout << p1;
            }
            else{
                char p2 = dg[i] + '1';
                cout <<p2;
            }
        }
        cout << endl;
    }
    return 0;
}