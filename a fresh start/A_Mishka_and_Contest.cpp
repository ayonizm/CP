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
void solve()
{
    ll n;
    cin >> n;
    ll p;
    cin >> p;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int i = 0;
    int j = n - 1;
    ll ct = 0;
    while (1)
    {
        if(x[i]>p&&x[j]>p){
            break;
        }
        if(x[i]<=p){
            ct++;
            i++;
            if(i>j){
                break;
            }
        }
        if(x[j]<=p){
            j--;
            ct++;
            if(i>j){
                break;
            }
        }

    }
    
    cout << ct << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}