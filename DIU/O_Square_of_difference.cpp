#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define test(t) \
    int t;      \
    cin >> t;   \
    while (t--)
#define MOD 1000000007
#define MOD1 998244353
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(vec) vec.begin(), vec.end()
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int

int main()
{
    op();
    string s;
    cin >> s;
    string j = s;
    string b = "";
    string k = "";
    sort(all(s), greater<char>());
    sort(all(j));
    for(auto v:s){
        b += v;
    }
    for(auto v:j){
        if(v=='0'){
            continue;
        }
        k += v;
    }
    int k1 = stoi(b);
    int k2 = stoi(k);
    // debug(k1);
    // debug(k2);
    cout << (ll)(k1 - k2) * (ll)(k1 - k2) << endl;

    return 0;
}