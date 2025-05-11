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
    vector<int> x;
    vector<int> y;
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        x.push_back(l);
        y.push_back(l);
    }
    sort(all(y), greater<int>());
    int w = 1;
    map<int, int> d;
    for (int i = 0; i < y.size()-1; i++)
    {
        if(y[i]!=y[i+1]){
            d[y[i]] = w;
            w++;
        }
        else{
            d[y[i]] = w;
            d[y[i+1]] = w;
            i++;
            w++;
        }
    }
    if (y[y.size() - 1] != y[y.size() - 2]){
        
        d[y[y.size() - 1]] = w;
    }
    else{
        d[y[y.size() - 1]] = w;

    }
    for (auto v : x)
    {
        cout << d[v] << endl;
}
    return 0;
}