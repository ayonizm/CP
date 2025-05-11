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
    ll n;
    cin >> n;
    set<ll> x;
    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        x.insert(k);
    }
    if(n==1){
        cout << "0" << endl;
        return 0;
    }
    cout << x.size() - 2 << endl;

    return 0;
}