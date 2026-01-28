#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
int main(){
    op();
    ll x;
    cin >> x;
    x = (x % 7 + 7) % 7;
    ll y = (x * x) % 7;
    ll z = (2 * y) % 7;
    ll w = (4 * x) % 7;
    ll a = (z + w) % 7;
    cout << a << endl;
    return 0;
}