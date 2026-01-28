#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
     int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a[3];
    // cout << a[3];
    a[0]=((k*l)/(nl));
    a[1]=(p/np);
    a[2]=c*d;
    sort(a , a+3);
    cout<<(a[0]/n);
    return 0;
}