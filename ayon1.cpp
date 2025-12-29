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
    vector<string> s1;
    vector<string> s2;
    map<string, int> x;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        x[t]++;
        if(x[t]==1){
            s1.pb(t);
        }
    }
    x.clear();
    for (int i = 0; i < m; i++)
    {
        string t;
        cin >> t;
        x[t]++;
        if (x[t] == 1)
        {
            s2.pb(t);
        }
    }
    int a = 0;
    int b = 0;
    x.clear();
    bool ok = false;
    while (a<s1.size()&&b<s2.size())
    {
        
        if(s1[a]==s2[b]&&x[s1[a]]==0){
            x[s1[a]]++;
            cout << s1[a] << endl;
            a++;
            b++;
            continue;
        }
        x[s1[a]]++;
        x[s2[b]]++;
        // debug(s1[a]);
        // debug(s1[b]);
        if(x[s1[a]]==1&&x[s2[b]]==1){
            cout << s1[a++]<<endl;
            cout << s2[b++]<<endl;
        }
        else if (x[s1[a]] == 1 && x[s2[b]] > 1){
            cout << s1[a++]<<endl;
            b++;
        }
        else if (x[s1[a]] > 1 && x[s2[b]] == 1)
        {
            cout << s2[b++]<<endl;
            a++;
        }
        else if (x[s1[a]] > 1 && x[s2[b]] > 1){
            a++;
            b++;
        }
        if(a>=s1.size()){
            ok = true;
            for (int i = b; i < s2.size();i++){
                x[s2[i]]++;
                if(x[s2[i]]==1){
                    cout << s2[i] << endl;
                }
            }
            break;
        }
        if(ok){
            break;
        }
        if (b >= s2.size())
        {
            ok = true;
            for (int i = a; i < s1.size(); i++)
            {
                x[s1[i]]++;
                if (x[s1[i]] == 1)
                {
                    cout << s1[i] << endl;
                }
            }
            break;
        }
        if(ok){
            break;
        }
    }
    
}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // test(t){
    solve();
    // }
    return 0;
}