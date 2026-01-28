// // #include <bits/stdc++.h>
// // using namespace std;
// // #define op()                      \
// //     ios_base::sync_with_stdio(0); \
// //     cin.tie(0);                   \
// //     cout.tie(0);
// // #define test(t) \
// //     int t;      \
// //     cin >> t;   \
// //     while (t--)
// // #define MOD 1000000007
// // #define MOD1 998244353
// // #define endl "\n"
// // #define pb push_back
// // #define mp make_pair
// // #define ff first
// // #define ss second
// // #define all(vec) vec.begin(), vec.end()
// // #define PI 3.141592653589793238462
// // #define debug(x) cout << #x << " " << x << endl;
// // #define ll long long int
// // void solve()
// // {
// //     int n;
// //     cin >> n;
// //     map<int, ll> m;
// //     ll a = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //         int v;
// //         cin >> v;
// //         if (v == 2)
// //         {
// //             v = 1;
// //         }
// //         a += m[v];
// //         m[v]++;
// //     }
// //     cout << a << endl;
// // }
// // int main()
// // {
// //     op();
// //     test(t){
// //         solve();
// //     }
// //     return 0;
// // }
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
//     int n;
//     cin >> n;
//     if(n&1){
//         cout << "Odd" << endl;
//     }
//     else{
//         cout << "Even" << endl;
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
#define MAX 10000000
bool flag[MAX + 1];
ll prime[MAX + 5];
ll total = 0;
void sieve()
{
    flag[0] = false;
    flag[1] = false;
    for (ll i = 2; i <= MAX; i++)
    {
        flag[i] = true;
    }
    ll f = sqrt(MAX);
    for (ll i = 0; i <= f; i++)
    {
        if (flag[i])
        {
            for (ll j = i * i; j <= MAX; j += i)
            {
                flag[j] = false;
            }
        }
    }
    for (ll i = 2; i <= MAX; i++)
    {
        if (flag[i])
        {
            prime[total++] = i;
        }
    }
}
void solve()
{
    sieve();
    cout << prime[24] << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}