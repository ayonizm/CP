// Author: ayon6594
// Date: 2025-11-05
// Time: 18:27:30

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
    int n;
    cin >> n;
    for (int i = 0; i <=25; i++)
    {
        for (int j = 0; j <=25; j++)
        {
            for (int k = 0; k <= 25; k++)
            {
                if(i+j+k<=n){
                    cout << i << " " << j << " " << k << endl;
                }else {
                    break;
                }
            }
            
        }
        
    }
    
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}