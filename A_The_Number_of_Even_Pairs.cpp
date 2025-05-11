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
    ll n,m;
    cin >> n >> m;
    ll p1 = (n * (n - 1)) / 2;
    ll p2 = (m * (m - 1)) / 2;
    p1 += p2;
    cout << p1 << endl;
    return 0;
}