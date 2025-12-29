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
int k = 0;
void solve(int n,int p)
{
    if(k==n){
        return;
    }
    for (int i = 0; i < n-p+k; i++)
    {
        cout << " ";
    }
    for (int i = 0; i <p; i++)
    {
        cout << "*";
    }
    k++;
    cout << endl;
    solve(n,p+2);
}
int main()
{
    op();
    // test(t){
        int k = 1;
    int n;
    cin >> n;
    solve(n,k);
    // }
    return 0;
}