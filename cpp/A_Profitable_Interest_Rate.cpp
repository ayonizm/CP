#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main() {
    op();
    long long int t;
    cin >> t; 

    while (t--) {
        long long int a, b;
        cin >> a >> b;

        if (a >= b) {
            cout << a << endl;
        } else {
            
            long long int dp = 2 * a - b;
            if(dp<0){
                dp = 0;
            }
            cout << dp << endl;
        }
    }
    
    return 0;
}
