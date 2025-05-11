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
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    vector<ll> x;
    vector<ll> y;
    map<ll, ll> c;
    for (int i = 0; i < k; i++)
    {
        ll p;
        cin >> p;
        x.push_back(p);
        y.push_back(p);
        c[p] = i + 1;
    }
    sort(all(y), greater<ll>());
    ll sum = 0;
    vector<int> t;
    for (int i = 0; i < k; i++)
    {
        sum += y[i];
        t.push_back(c[y[i]]);
        if(sum>=n){
            break;
        }
    }
    vector<int> poi;
    if(sum>=n){
        cout << t.size() << endl;
        sort(all(t));
        for(auto v:t){
            cout << v << " ";
        }
    }
    else{
        cout << -1 << endl;
    }
    

    return 0;
}