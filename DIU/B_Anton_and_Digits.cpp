#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    int r;
    if(a<=d&&a<=c){
        r = a;
    }
    else if (d <= a && d <= c){
        r = d;
    }
    else{
        r = c;
    }
    int sum = 256 * r;
    a = a - r;
    int z = min(a, b);
    sum = sum + (32 * z);
    cout << sum << endl;
    return 0;
}