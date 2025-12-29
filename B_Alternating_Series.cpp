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
    if(n%2==0){
        if(n!=2){
            for (int i = 0; i < n-1; i++)
            {
                if (i % 2 == 0)
                {
                    cout << -1 << " ";
                }
                else
                {
                    cout << 3 << " ";
                }
            }
            cout << 2<<endl;
        }
        else{
            cout << -1 << " " << 2 << endl;
        }
    }
    else if(n%2!=0){
        for (int i = 0; i < n; i++)
        {
            if(i%2==0){
                cout << -1 << " ";
            }
            else{
                cout << 3 << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}