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
    int m;
    cin >> m;
    string s;
    cin >> s;
    if(n==m){
        for (int i = 0; i < n; i++)
        {
            cout << '-';
        }
        cout << endl;
        return;
    }
    int mn = 0;
    int pl = 0;
    int ex = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='0'){
            mn++;
        }
        else if(s[i]=='1'){
            pl++;
        }
        else if(s[i]=='2'){
            ex++;
        }
    }
    string p = "";
    for (int i = 0; i < n; i++)
    {
        p += '+';
    }
    for (int i = 0; i < mn; i++)
    {
        p[i] = '-';
    }
    // debug(p);
    for (int i =n-1; i>=0; i--)
    {
        if(pl==0){
            break;
        }
        p[i] = '-';
        pl--;
    }
    // debug(p);
    int rp = ex;
    for (int i = 0; i < p.length(); i++)
    {
        if(rp==0){
            break;
        }
        if(p[i]=='+'){
            rp--;
            p[i] = '?';
        }
    }
    int pr = ex;
    for (int i = n-1; i>=0; i--)
    {
        if(pr==0){
            break;
        }
        if (p[i] == '+')
        {
            pr--;
            p[i] = '?';
        }
    }
    cout << p << endl;
}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    test(t){
    solve();
    }
    return 0;
}