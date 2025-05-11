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
    int n;
    cin >> n;
    vector < pair<pair<int,int>,int>> x;
    for (int i = 0; i < n; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        x.push_back({{a, b}, c});

    }
    sort(all(x));
    for(auto v:x){
        cout << v.ff.ff << " " << v.ff.ss << " " << v.ss << endl;
    }

    return 0;
}