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
int oivai(string s)
{
    int n = s.size();
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] > s[j]){

                ct++;
            }
        }
    }
    return ct;
}

int main()
{
    op();
    test(t){
        int n, m;
        cin >> n >> m;
        vector<pair<pair<int, int>, string>> v;
        for (int i = 0; i < m; i++)
        {
            string s;
            cin >> s;
            v.pb({{oivai(s), i}, s});
        }
        sort(v.begin(), v.end());
        for (auto k : v)
        {
            cout << k.second << endl;
        }
        cout << endl;
    }
}