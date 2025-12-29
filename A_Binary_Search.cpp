//************************************************************
//  █████  ██    ██   ██████   ███    ██ |
// ██   ██ ██    ██  ██    ██  ████   ██ |
// ███████   ████    ██    ██  ██ ██  ██ |
// ██   ██    ██     ██    ██  ██  ██ ██ |
// ██   ██    ██      ██████   ██   ████ |
// ************************************************************/
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
ll bin(vector<ll>&x,ll tar){
    ll l = 0;
    ll r = x.size() - 1;
    while (l<=r)
    {
        ll mid = (l + r) / 2;
        if(x[mid]==tar){
            return mid+1;
        }
        else if(x[mid]>tar){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    op();
    
    int a, b;
    cin >> a >> b;
    vector<ll> x;
    for (int i = 0; i < a; i++)
    {
        int p;
        cin >> p;
        x.push_back(p);
    }
    while (b--)
    {
        int tr;
        cin >> tr;
        cout << bin(x, tr) << endl;
    }
    
    
    return 0;
}