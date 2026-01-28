#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
     ll a, b;
    cin >> a >> b;
    ll flag = 0;
    for (ll i = 1; i * i <= b;i++) {
          if (b % i == 0) {
            ll m = b / i;
        if (m+i == a) {
                flag = 1;
                break;
        }
        }
    }
      if(flag){
        cout << "Yes" << endl;
    }
    else{
    cout << "No" << endl;
    }
    return 0;
}