#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int a, b;
    cin >> a >> b;
    if(a<=b){
    cout << min(a, b) << endl;

    }
    else{
        cout << a - 1 << endl;
    }
    
    return 0;
}