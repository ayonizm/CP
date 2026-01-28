// Author: ayon6594
// Date: 2025-11-11
// Time: 10:32:00

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
    for (int q = 0; q < n; q++)
    {
        int t;
        cin >> t;
        x.pb(t);
    }
    if(is_sorted(all(x))){
        cout << "0" << endl;
        return;
    }
    int ct = 0;
    if(x[i])
    for (int i = n-1; i >= 0; i--)
    {
        if(x[i]>=x[i-1]){
            if(x[i]/2<x[i-1]){
                if(i==0){
                    x[i] = x[i] / 2;
                    ct++;
                    continue;
                }
                if(i!=0&&x[i]/2>x[i-1]){
                    x[i] = x[i] / 2;
                    continue;
                }
            }
        }
    }
    for(auto v:x){
        cout << v << " ";
    }
    cout << endl;
    if(is_sorted(all(x))){
        cout << ct << endl;
    }
    else{
        cout << -1 << endl;
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