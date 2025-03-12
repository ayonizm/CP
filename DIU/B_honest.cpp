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

ll ct = 1;
void solve(){
    
    ll a, b;
    cin >> a >> b;
    ll x = a - b;
    ;
    cout << "Case " << ct++ << ": ";
    vector<ll> v;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if (b < i)
            {
                v.push_back(i);
            }
            if (i != x / i && b < x / i)
            {
                v.push_back(x / i);
            }
        }
    }
    sort(v.begin(), v.end());
    if(v.empty()){
        cout << "impossible";
        
    }
    for(auto x:v){
        cout << x << " ";
    }
    cout << endl;
}
int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    

    return 0;
}