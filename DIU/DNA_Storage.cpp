#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
void solve()
{
map<string, char> x;
x["00"] = 'A';
x["01"] = 'T';
x["10"] = 'C';
x["11"] = 'G';
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> l;
    string k;
    for (int i = 0; i < s.length(); i+=2)
    {
        k += s[i];
        k += s[i+1];
        l.push_back(k);
        k.clear();
    }
    for(auto v:l){
        cout <<x[v];
    }
    // k.clear();
    cout << endl;
}
int main()
{
    op();
    ll a;
    cin >> a;
    while (a--)
    {
        solve();
    }

    return 0;
}