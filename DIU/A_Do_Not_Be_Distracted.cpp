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
    map<char, int> x;
    bool flag = true;
    for (int i = 0; i <n; i++)
    {
        x[s[i]]++;
        if(x[s[i]]>1&&s[i-1]!=s[i]){
            flag = false;
            break;
        }
    }
   if(flag){
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