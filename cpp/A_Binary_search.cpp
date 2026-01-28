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
ll bins(vector<ll> &x, ll target)
{
    
    int lo = 0;
    int hi = x.size() - 1;
    int mid;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if (target > x[mid])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (target == x[lo])
    {
        return lo;
    }
    else if (target == x[hi])
    {
        return hi;
    }
    else
    {
        return -1;
    }
}
int main()
{
    op();
    vector<ll> x;
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    while (n--)
    {
        ll p;
        cin >> p;
        x.push_back(p);
    }
    while (q--)
    {
        ll j;
        cin >> j;
        if(bins(x,j)==-1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    

    return 0;
}