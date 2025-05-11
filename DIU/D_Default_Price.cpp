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
bool isthere(vector<string> &l,string a)
{
    for (int i = 0; i < l.size(); i++)
    {
        if(l[i]==a){
            return true;
        }
    }
    return false;
}
int main()
{
    op();
    int n;
    cin >> n;
    int p;
    cin >> p;
    vector<string> x;
    for (int i = 0; i < n; i++)
    {
        string l;
        cin >> l;
        x.pb(l);
    }
    vector<string> t;
    for (int i = 0; i < p; i++)
    {
        string h;
        cin >> h;
        t.pb(h);
    }
    int sp;
    cin >> sp;
    map<string, int> f;
    
    for (int i = 0; i < p; i++)
    {
        int re;
        cin >> re;
        f[t[i]] = re;
    }
    int sum = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if(f[x[i]]==0){
            sum += sp;
        }
        else{
            sum += f[x[i]];
        }
    }
    cout << sum << endl;

    return 0;
}