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
bool solve(int n,int idx,vector<int>&x,int sum,int k){
    if(idx==n){
        if(sum==k){
            return true;
        }
        else{
            return false;
        }
    }
    return solve(n, idx + 1, x, sum + x[idx], k) || solve(n, idx + 1, x, sum - x[idx], k);
}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    vector<int> x;
    int sum;
    cin >> sum;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;
        x.pb(k);
    }
    bool ok=solve(t, 0, x, 0, sum);
    if(ok){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    // }
    return 0;
}