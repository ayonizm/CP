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
int bin(vector<ll> &x, int target)
{
    ll lo = 0;
    ll hi = x.size() - 1;
    while ((hi - lo) > 1)
    {
        int mid = (hi + lo) / 2;
        if (x[mid] <= target)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    if (x[lo] == target)
    {
        return true;
    }
    else if (x[hi] == target)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    op();
    ll x, y;
    cin >> x >> y;
    vector<ll> x1;
    vector<ll> y1;
    map<ll, ll> ay;
    for (int i = 0; i < x; i++)
    {
        ll p;
        cin >> p;
        ay[p]++;
        x1.push_back(p); 
    }
    for (int i = 0; i < y; i++)
    {
        ll p;
        cin >> p;
        y1.push_back(p);
    }
    map<ll, ll> c;
    int k = 0;
    int ui = min(x, y);
    for (int i = 0; i < ui; i++)
    {
        if(c[y1[i]]==0){
            c[y1[i]]++;
            if(!(bin(x1,y1[i]))){
                k++;
            }
        }
    }

    cout << k << endl;

    return 0;
}