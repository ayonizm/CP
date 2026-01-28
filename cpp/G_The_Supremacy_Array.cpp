#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    vector<ll> x;
    ll a, b;
    cin >> a >> b;
    ll count = 0;
    for (int i = 0; i < a; i++)
    {
        ll temp;
        cin >> temp;
        x.push_back(temp);
    }
    vector<ll> t;
        ll sum = 0;
    for (ll i = x.size()-1; i >=a-b; i--)
    {
        sum += x[i];
        ll trr = max(sum, x[i]);
        t.push_back(trr);
    }
    vector<ll> r;
    ll ct = 0;
    ll su = 0;
    for (ll i = 0; i <b+(a-b)-1 ; i++)
    {
        su += x[i];
        if(i>=b-1){
            r.push_back(max(su, x[ct]));
            su -= x[ct];
            ct++;
        }
        
    }
    for(auto v:r){
        cout << v << " ";
    }
    reverse(t.begin(), t.end());
    for(auto ayon:t){
        cout << ayon << " ";
    }
    cout << endl;
    
    return 0;
}

