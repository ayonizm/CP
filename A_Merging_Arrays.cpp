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
    vector<int> x1;
    vector<int> x2;
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        int k;
        cin >> k;
        x1.push_back(k);
    }
    for (int i = 0; i < b; i++)
    {
        int k;
        cin >> k;
        x2.push_back(k);
    }
    int i = 0;
    int j = 0;
    vector<int> x;
    while (1)
    {
        if(i==a&&j==b){
            break;
        }
        if (x1[i] < x2[j]&&i<a&&j<b)
        {
            x.push_back(x1[i++]);
        }
        else if (x1[i] > x2[j] && i < a && j < b)
        {
            x.push_back(x2[j++]);
        }
        else{
            if(i<a){
                x.push_back(x1[i++]);
            }
            else{
                x.push_back(x2[j++]);
            }
        }
    }
    
    for (auto v : x)
    {
        cout << v << " ";
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