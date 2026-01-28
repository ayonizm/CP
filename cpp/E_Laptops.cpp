#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long n, x, y;
    cin >> n;

    for (long long i = 1; i <= n; ++i) {
        cin >> x >> y;
        if (x != y) {
            cout << "Happy Alex" << endl;
            return 0; 
        }
    }
    
    cout << "Poor Alex" << endl;
    return 0;

}