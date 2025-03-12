#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        ll t;
        cin >> t;
        set<ll> x;
        while (t--)
        {
            ll temp;
            cin >> temp;
            x.insert(temp);
        }
        cout << x.size() - 1 << endl;
    }
    
    return 0;
}