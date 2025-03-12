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
map<char, int> x;
int l= 1;
void hello(){
    x['a'] = 1;
    x['b'] = 2;
    x['c'] = 3;
    x['d'] = 1;
    x['e'] = 2;
    x['f'] = 3;
    x['g'] = 1;
    x['h'] = 2;
    x['i'] = 3;
    x['j'] = 1;
    x['k'] = 2;
    x['l'] = 3;
    x['m'] = 1;
    x['n'] = 2;
    x['o'] = 3;
    x['p'] = 1;
    x['q'] = 2;
    x['r'] = 3;
    x['s'] = 4;
    x['t'] = 1;
    x['u'] = 2;
    x['v'] = 3;
    x['w'] = 1;
    x['x'] = 2;
    x['y'] = 3;
    x['z'] = 4;
    x[' '] = 1;
}
void solve(){
    int k = 0;
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        
        k += (x[s[i]]);
    }
    cout << "Case #" << l++ << ": " << k<< endl;
}
int main(){
    op();
    ll n;
    cin >> n;
    hello();
    cin.ignore();
    while (n--)
    {
        solve();
    }
    

    return 0;
}