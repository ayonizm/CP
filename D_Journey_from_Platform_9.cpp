#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int a, b, c;
    cin >> a >> b >> c;
    if(c==0){
        cout << "Forever" << endl;
        return 0;
    }
    int k = (a * b) / c;
    k = k + b;
    if (k >2676275){
        
        cout << "Forever" << endl;
        return 0;
    }
    cout << k << endl;
    return 0;
}