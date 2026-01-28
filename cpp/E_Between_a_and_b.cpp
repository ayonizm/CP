#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
        long long int  a, b, x;
    cin >> a >> b >> x;
    long long int count = (b / x) - (a / x);
    if (a % x == 0){
     count += 1;

    }

    cout << count << endl;
    return 0;
}