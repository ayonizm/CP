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
set<string> k;
void solve(string s,int idx)
{
    if(s.length()==idx){
        k.insert(s);
        return;
    }
    for (int i = idx; i < s.size(); i++)
    {
        swap(s[i], s[idx]);
        solve(s, idx + 1);
        swap(s[i], s[idx]);
    }
    
}
int ct = 1;
int main()
{
    op();
    
    solve("630", 0);
    solve("116", 0);
    solve("421", 0);
    // solve("222", 0);
    // solve("222", 0);
    k.insert("222");
    k.insert("333");
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        string l = "";
        l += to_string(a);
        l += to_string(b);
        l += to_string(c);
        cout << "Case " << ct << ": ";
        ct++;
        bool ok = false;
        for(auto v:k){
            if(l==v){
                cout << "perfectus" << endl;
                ok = true;
            }
            if(ok){
                break;
            }
          
        }
        if(!ok)
        {
            cout << "invalidum" << endl;
        }
    }
    
    return 0;
}