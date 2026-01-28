#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int a;
    cin >> a;
    
    long long int sum = 0;
    
    for (long long int i = 1; i <= a; i++) {
        if (i % 3 != 0 && i % 5 != 0) {
            sum = sum + i;
        }
    }
    
    cout << sum << endl;
    return 0;
}