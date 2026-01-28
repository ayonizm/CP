#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    //edge case 1
    ll f = a / y;
    ll k = a % y;
    f = f*x + (k / b);
    // cout << f;

    //edge case 2
    ll t = a / b;
    cout << max(t, f) << endl;

    return 0;
}