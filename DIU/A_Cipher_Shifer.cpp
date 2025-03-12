#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    char x = s[0];
    vector<char> p;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i]==x){
            p.push_back(x);
            x = s[i+1];
            
            i++;
        }
        
    }
    for(auto v:p){
        cout << v;
    }
    cout << endl;
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