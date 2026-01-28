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
set<ll> getdivisor(ll num)
{
    set<ll> divisor;
    for (ll i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            divisor.insert(i);
            if (i != num / i)
            {
                divisor.insert(num / i);
            }
        }
    }
    
    return divisor;
}
void solve(){
    ll n;
    cin >> n;
    set<ll> p;
    p = getdivisor(n);

    vector<ll> o;
    for(auto v:p){
        o.push_back(v);
    }
    o.erase(o.begin());
    o.erase(o.end());
    for (int i = 0; i < o.size(); i++)
    {
        for (int j = 0; j < o.size(); j++)
        {
            for (int k = 0; k < o.size(); k++)
            {
                if((o[i]*o[j]*o[k])==n){
                    cout << "YES" << endl;
                    return;
                }
            }
            
        }
        
    }
    cout << "NO" << endl;
    return ;
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