#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int x, y, z;
    cin >> x >> y >> z;
    // double a = pow(x, z);
    // double b = pow(y, z);
    if(z%2!=0){
        if(x==y){
            cout << "=" << endl;
        }
        else if(x<y){
            cout << "<" << endl;
        }
        else if(x>y){
            cout << ">" << endl;
        }
    }
    else if(z%2==0){
        x = abs(x);
        y = abs(y);
        if(x>y){
            cout << ">" << endl;
        }
        else if(x<y){
            cout << "<" << endl;
        }
        else{
            cout << "=" << endl;
        }
    }
    return 0;
}