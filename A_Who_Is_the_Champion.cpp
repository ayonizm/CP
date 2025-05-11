#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b;
    cin >> a >> b;
    if (a > b){
        cout << "Champion" << endl;
        cout << "Runner up" << endl;
        
    }
    else{
        cout << "Runner up" << endl;
         cout << "Champion" << endl;
    }
    return 0;
}