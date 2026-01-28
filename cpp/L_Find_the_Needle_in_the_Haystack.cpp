#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    map<pair<ll, ll>, ll> x;
    string s;
    cin >> s;
    ll q;
    cin >> q;
    for (ll i = 0; i < s.length()-1; i++)
    {
    map<char, ll> p;
        for (ll j = i; j < s.length(); j++)
        {
            p[s[j]]++;
            x[{i+1, j+1}] = p.size();
        }
        
    }
    
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        ll r = x[{a, b}]-1;
        if(r==(b-a)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}