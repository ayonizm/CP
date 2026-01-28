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
    vector<int> x;
    int mx = 0;
    for (int i = 0; i < 4; i++)
    {
        int t;
        cin >> t;
        if(t>mx){
            mx = t;
        }
        x.push_back(t);
    }
    for (int i = 0; i < 4; i++)
    {
        if(mx==x[i]){
            continue;
        }
        cout << abs(x[i] - mx) << " ";
    }
    

    
    return 0;
}