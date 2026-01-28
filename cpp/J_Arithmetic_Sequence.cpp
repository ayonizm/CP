#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b, c;
    cin >> a >> b >> c;
    ll a1 = b - a;
    ll b1 = c - b;
    ll pk = abs(b1 - a1);
    cout << (pk + 1) / 2 << endl;
    return 0;
}