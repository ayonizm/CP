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
    vector<ll> a;
    map<ll, ll> x;
    while (n--)
    {
        ll k;
        cin >> k;
        a.push_back(k);
        x[k]++;
    }
    ll t = *min_element(a.begin(), a.end());
    ll r = min_element(a.begin(), a.end())-a.begin();
    if(x[t]==1){
        cout << r+1 << endl;
    }
    else{
        cout << "Still Rozdil" << endl;
    }

    return 0;
}