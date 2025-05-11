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

ll pow_ll(ll base, ll exp)
{
    ll result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

int main()
{
    op();
    
        int n, m;
        cin >> n >> m;

        int sum = 0;
        bool pos = true;
        const int lim = 1e9;

        for (int i = 0; i <= m; i++)
        {
            if (sum > lim)
            { 
                pos = false;
                break;
            }
            ll temp = pow_ll(n, i);
            if (temp > lim)
            { 
                pos = false;
                break;
            }
            if (sum + temp > lim)
            {
                pos = false;
                break;
            }
            sum += temp;
        }

        if (pos){
            cout << sum << endl;
        }
        else{
            cout << "inf" << endl;
        }
    

    return 0;
}
