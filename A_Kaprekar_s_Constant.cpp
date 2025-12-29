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
    string s;
    cin >> s;
    string la = s;
    string sm = s;
    set<char> p;
    for (int i = 0; i < s.length(); i++)
    {
        p.insert(s[i]);
    }
    if (p.size() == 1)
    {
        cout << "No" << endl;
        return;
    }

    while (1)
    {
        if (s == "6174"){
            cout << "Yes" << endl;
            return;
        }
        p.clear();
        for (int i = 0; i < s.length(); i++)
        {
            p.insert(s[i]);
        }
        if (p.size() == 1)
        {
            cout << "No" << endl;
            return;
        }
            sort(all(s));
        string sm = s;
        sort(all(s),greater<char>());
        string lg = s;
        if(lg.size()!=4||sm.size()!=4){
            cout << "No" << endl;
            return;
        }
        int p1 = stoi(sm);
        int p2 = stoi(lg);
        int r = p2 - p1;
        if(r==0){
            cout << "No" << endl;
            return;
        }
        s = to_string(r);
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