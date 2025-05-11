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
bool rev(int n, int k, string s)
{
    string r1 = s;
    reverse(r1.begin(), r1.end());
    if (s < r1)
    {
        return true;
    }
    if (k == 0)
    {
        return false;
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            swap(s[i], s[n - i - 1]);
            k--;
            r1 = s;
            reverse(r1.begin(), r1.end());
            if (s < r1)
            {
                return true;
            }
            if (k == 0)
            {
                break;
            }
        }
    }
    if (k > 0)
    {
        string t1 = s;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(t1[i], t1[j]);
                string cr = t1;
                reverse(cr.begin(), cr.end());
                if (t1 < cr)
                {
                    return true;
                }
                swap(t1[i], t1[j]);
            }
        }
    }

    return false;
}
void solve(){
    int n, k;
    string s;
    cin >> n >> k >> s;
    if (rev(n, k, s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    test(t){
        solve();
    }
    return 0;
}