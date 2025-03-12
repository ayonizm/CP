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
    string k;
    cin >> k;
    map<char, int> x;
    for (int i = 0; i < k.length(); i++)
    {
        x[k[i]]++;
   }
   bool f = true;
   for (int i = 0; i < s.length(); i++)
   {
    if(x[s[i]]==0){
        f = false;
        break;
    }
   }
   
    
    if(f){
        YES;
    }
    else{
        NO;
    }
    // cout << p << endl;
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