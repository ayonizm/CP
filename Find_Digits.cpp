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
void solve(){
    string s;
    cin >> s;
    ll k = stoll(s);
    int ct = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]-'0'==0){
            continue;
        }
        if(k%(s[i]-'0')==0){
            ct++;
        }
    }
    cout << ct << endl;
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