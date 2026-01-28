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
    ll ud = 0;
    ll rl = 0;
    int f = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='U'){
            ud++;
        }
        else if(s[i]=='D'){
            ud--;
        }
        else if(s[i]=='R'){
            rl++;
        }
        else{
            rl--;
        }
        if(ud==1&&rl==1){
            f = 1;
        }
    }
    if(f){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
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