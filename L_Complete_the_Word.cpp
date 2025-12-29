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
    int n = s.size();
    map<char, int> mp;
    int j = 0;
    bool f = false;
    int l = 0, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            mp[s[i]]++;
        while (mp[s[i]] > 1)
        {
            mp[s[j]]--;
            j++;
        }
        if (i - j + 1 == 26)
        {
            f = true;
            l = j;
            r = i;
        }
    }
    if (f)
    {
        map<char, int> pp;
        for (int i = l; i <= r; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                pp[s[i]]++;
        }

        for (int i = l; i <= r; i++)
        {
            if (s[i] == '?')
            {
                for (char c = 'A'; c <= 'Z'; c++)
                {
                    if (pp[c] == 0)
                    {
                        s[i] = c;
                        pp[c]++;
                        
                        break;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                s[i] = 'A';
            }
        }

        cout << s << endl;
    }
    else
    {
        cout << -1 << endl;
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