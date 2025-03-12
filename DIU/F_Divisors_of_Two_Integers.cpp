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
    vector<ll> x;
    vector<ll> y;
    ll a;
    cin >> a;
    while (a--)
    {
        int k;
        cin >> k;
        x.push_back(k);
    }
    int j;
    cin >> j;
    while (j--)
    {
        int k;
        cin >> k;
        y.push_back(k);
    }
    for(auto v:y){
        x.push_back(v);
    }

    for(auto v:x){
        cout << v << " ";
    }
    

    return 0;
}