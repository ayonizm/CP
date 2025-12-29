// Author: ayon6594
// Date: 2025-11-10
// Time: 21:16:36

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
    vector<int> x;
    map<int, int> r;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
        r[t]++;
    }
    if(r.size()==1){
        cout << "YES" << endl;
        return;
    }
    // if (r.size()==2)
    // {
    //     cout << "YES" << endl;
    //     return;
    // }
    
    // int mx = *max_element(all(x));
    // int mn = *min_element(all(x));
    sort(all(x));
    for (int i = 1; i < n-1; i++)
    {
        if(x[i]!=x[i+1]){
            cout << "NO" << endl;
            // debug(i);
            return;
        }
        i++;
    }
    cout << "YES" << endl;
    // debug(mx);
    // debug(mn);
    // for(auto v:r){
    //     cout << v.ff << endl;
    //     if(v.ss%2==0){
    //         continue;
    //     }
    //     if(v.ss%2!=0&&v.ff==mx){
    //         continue;
    //         cout << "NO" << endl;
    //         return;
    //     }
    //     if(v.ss%2!=0&&v.ff!=mn){
    //         cout << "NO" << endl;
    //         return;
    //     }
        
    // }
}
int main()
{
    op();
    test(t){
    solve();
    }
    return 0;
}