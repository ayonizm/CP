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

const ll MAX = 5e5 + 5;
vector<ll> facto(MAX + 5, 1);
void precompute_fac()
{
    for (int i = 2; i <= MAX; i++)
    {
        facto[i] = (facto[i - 1] * i);
    }
}
void solve(){
    string s;
    cin >> s;
    string k = "";
    for (int i = 0; s[i]!='!'; i++)
    {
        k += s[i];
    }
    ll sum = stol(k);

    
    cout << facto[sum] << endl;
}
int main(){
    op();
    precompute_fac();
    ll n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    

    return 0;
}