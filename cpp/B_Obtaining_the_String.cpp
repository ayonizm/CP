#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define test(p) \
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
    string s, p;
    cin >> s >> p;
    vector<int> x;
    string p1 = s;
    string p2 = p;
    sort(all(p1));
    sort(all(p2));
    if(p1!=p2){
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == p[i]){
            continue;
        }
        int pos = INT_MIN;
        int j = i + 1;
        while (j<n)
        {
            if(s[j]==p[i]){
                pos = j;
                break;
            }
            j++;
        }
        for (int j = pos - 1; j >= i; j--)
        {
            swap(s[j], s[j + 1]);
            x.pb(j+1);
        }
    }

    cout << x.size() << endl;
    for (auto v : x){
        cout << v << " ";
    }
    cout << endl;
}
int main()
{
    op();
    // test(p){
        solve();
    // }
    return 0;
}