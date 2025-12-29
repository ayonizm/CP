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
    vector<ll> x;
    while (n--)
    {
        int p;
        cin >> p;
        x.push_back(p);
    }
    sort(x.begin(), x.end());
    ll y;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        ll l, r;
        cin >> l >> r;
        auto it1 = lower_bound(x.begin(), x.end(), l);
        auto it2 = upper_bound(x.begin(), x.end(), r);
        ll e = it2 - x.begin();
        ll s = it1 - x.begin();
        ll tr = e - s;
        cout << tr << " ";
    }
    

    return 0;
}