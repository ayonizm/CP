#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int gcdayon(int a,int b){
    while (a!=0&&b!=0)
    {
        if(a>b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    int k = max(a, b);
    return k;
}
int main(){
    op();
    int x, y;
    cin >> x >> y;
    cout << gcdayon(x, y);
    return 0;
}