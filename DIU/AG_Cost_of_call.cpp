#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b, n;
    cin >> a >> b >> n;
    ll minutes = (n + 59) / 60;
    cout << a + minutes * b << endl;
    return 0;
}