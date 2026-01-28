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
int cv(string s)
{
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    string ay = s.substr(6, 2); 

    if (ay == "AM")
    {
        if (h == 12){
            h = 0;
        }
    }
    else
    {
        if (h != 12){
            h += 12;
        }
    }

    return h * 60 + m;
}
void solve()
{
    string p;
    getline(cin, p);
    int k = cv(p);
    int n;
    cin >> n;
    cin.ignore();
    string ans = "";
    while (n--)
    {
        string s;
        getline(cin, s);

        string p1 = s.substr(0, 8);
        string p2 = s.substr(9, 8);

        int x1 = cv(p1);
        int x2 = cv(p2);

        if (x1 <= k && k <= x2){
            ans += '1';
        }
        else{
            ans += '0';
        }
    }
    cout << ans << endl;
}
int main()
{
    op();
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
    return 0;
}