#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int gcdayon(int a,int b){
    while (a!=b)
    {
        if(a>b){
            a -= b;
        }
        else{
            b -= a;
        }
    }
    return a;
}
int main(){
    op();
    int x, y;
    cin >> x >> y;
    cout << gcdayon(x, y);
    return 0;
}