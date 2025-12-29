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
    ll s, n;
    cin >> s >> n;
    vector<pair<ll, ll>> c;
    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        c.push_back({x, y});
        
    }
    sort(c.begin(), c.end());
    for (int i = 0; i < c.size(); i++)
    {
        
        if (s > c[i].first)
        {
            s += c[i].second;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
        
    }
    
    cout<<"YES"<<endl;

    return 0;
}