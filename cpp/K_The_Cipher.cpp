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
map<int, int> x;
#define MAX 10000000
bool flag[MAX + 1];
ll prime[MAX + 5];
ll total = 0;
void sieve()
{
    flag[0] = false;
    flag[1] = false;
    for (ll i = 2; i <= MAX; i++)
    {
        flag[i] = true;
    }
    ll f = sqrt(MAX);
    for (ll i = 0; i <= f; i++)
    {
        if (flag[i])
        {
            for (ll j = i * i; j <= MAX; j += i)
            {
                flag[j] = false;
            }
        }
    }
    for (ll i = 2; i <= MAX; i++)
    {
        if (flag[i])
        {
            prime[total++] = i;
        }
    }
}
void precom(){
    char r = 'A';
    for (int i = 0; i <=25; i++)
    {
        x[r++] = i;
    }
    
}
void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int oi1 = 100;
        int oi2 = 10;
        ll k;
        ll sum = 0;
        if(s.length()==3){

            for (int i = 0; i < s.length(); i++)
            {
                k = oi1 * x[s[i]];
                sum += k;
                oi1 = oi1 / 10;
            }
        }
        else if(s.length()==2){
            for (int i = 0; i < s.length(); i++)
            {
                k = oi2 * x[s[i]];
                sum += k;
                oi2 = oi2 / 10;
            }
        }
        else{
            ll p1 = x[s[0]];
            sum = p1;
        }
        cout << prime[sum] << endl;
    }

    
}
int main()
{
    op();
    precom();
    sieve();
    test(t){
        solve();
    }
    return 0;
}