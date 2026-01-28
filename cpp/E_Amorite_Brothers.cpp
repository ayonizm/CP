// #include <bits/stdc++.h>
// using namespace std;
// #define op()                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define test(t) \
//     int t;      \
//     cin >> t;   \
//     while (t--)
// #define MOD 1000000007
// #define MOD1 998244353
// #define endl "\n"
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(vec) vec.begin(), vec.end()
// #define PI 3.141592653589793238462
// #define debug(x) cout << #x << " " << x << endl;
// #define ll long long int
// void solve()
// {
//     string n;
//     cin >> n;

//     string dig;
//     if (n.length() > 3)
//     {
//         dig = n.substr(n.length() - 3);
//     }
//     else
//     {
//         dig = n;
//     }

//     int v = stoi(dig);

//     if (v % 8 == 0)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }
// int main()
// {
//     op();
//     // test(t){
//         solve();
//     // }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ot()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{

    string s;
    cin >> s;
    ll l = s.size();

    if (s.size() > 3)
    {
        string k;
        k += s[l - 1];
        k += s[l - 2];
        k += s[l - 3];
        reverse(k.begin(), k.end());

        ll x = stoi(k);
        //  cout << x << endl;
        if (x % 8 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        ll y = stoi(s);
        if (y % 8 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }
}