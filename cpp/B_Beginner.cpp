#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int x, y;
    cin >> x >> y;
    if(x<10){
        long long int sum = 100 * (10 - x);
        y = y + sum;
        cout << y << endl;
    }
    else{
        cout << y << endl;
    }
    return 0;
}