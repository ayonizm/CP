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
    map<int, int> p;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        p[t]++;
        if(t==25){
            continue;
        }
        
        else if(t==50){
            if(p[25]>=1){
                p[25]--;
                continue;
            }
            else{
                cout << "NO" << endl;
                return;
            }
            
            // continue;
        }
       else if(t==100){
            if(p[50]>0&&p[25]>0){
                p[50]--;
                p[25]--;
                continue;
            }
            else if(p[25]>=3){
                p[25] = p[25] - 3;
                continue;
            }
            else{
                cout <<"NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}