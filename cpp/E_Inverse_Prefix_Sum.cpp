#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    vector<ll> x;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        x.push_back(t);
    }
    cout << x[0] << " ";
    for (int i = 0; i < n-1; i++)
    {
        ll k=(x[i] - x[i + 1])*-1;
        cout << k << " ";
    }

    cout << endl;
    return 0;
}