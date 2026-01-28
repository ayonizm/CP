#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    double x;
    cin >> x;
    x = sqrt(x);
    int p = x;
    double n = p;
    if((x-n)==0.0){
        cout << p << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}