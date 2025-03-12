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
    map<char, int> x1;
    map<int, int> x2;
    for (int i = s.length()-1; i >=0; i--)
    {
        s[i] = tolower(s[i]);
        x1[s[i]]++;
        x2[i + 1] = x1.size();
    }
    ll k;
    cin >> k;
    
    while (k--)
    {
        ll tr;
        cin >> tr;
        cout << x2[tr];
        if(k!=0){
            cout << " ";
        }
    }
    cout << endl;
}
int main(){
    op();
    ll n;
    cin >> n;
    ll ov = 1;
    while (n--)
    {
        cout << "Case " << ov++ << ": ";
        solve();
    }
    
    return 0;
}