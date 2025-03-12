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
        ll p;
        cin >> p;
        x.push_back(p);
    }
    ll p = 0;
    for (ll i = 0; i < x.size()-1; i++)
    {
        if((x[i]>x[i+1])){
            p += abs(x[i + 1] - x[i]);
            x[i + 1] += (abs(x[i + 1] - x[i]));
        }
    }
    cout << p << endl;

    return 0;
}