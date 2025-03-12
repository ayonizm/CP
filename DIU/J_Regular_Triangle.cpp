#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int a, b, c;
    cin >> a >> b >> c;
    if(a==b&&b==c&&c==a){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
        return 0;
}