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
    map<string, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp[s] == 0){

            res++;
        }
        else{

            mp[s]--;
        }
    }
    cout << res << endl;

    return 0;
}