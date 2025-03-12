#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b;
    cin >> a >> b;
    vector<ll> x;
    while (a--)
    {
        ll k;
        cin >> k;
        x.push_back(k);
    }
    ll ct = 0;
    for (int i = 0; i < x.size()-1; i++)
    {
        for (int j = i+1; j < x.size(); j++)
        {
            ll f = x[i] * x[j];
           if(f==b){
               ct++;
           }
        }
        
    }
    cout << ct << endl;

    return 0;
}