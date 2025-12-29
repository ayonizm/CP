// Author: ayon6594
// Date: 2025-11-14
// Time: 20:49:45

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
    int a, b;
    cin >> a >> b;
    int q1 = 0;
    int q2 = 0;
    for (int i = 0; i < a; i++)
    {
        int t;
        cin >> t;
        if(t<b){
            q1++;
        }
        if(t>b){
            q2++;
        }
    }
    if(q2>=q1){
        cout << b + 1 << endl;
    }
    else{
        cout << b - 1 << endl;
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