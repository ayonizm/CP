// #include<bits/stdc++.h>
// using namespace std;
// #define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl "\n"
// int main(){
//     op();
//     string l = "abcdefghijklmnopqrstuvwxyz";
//     string s;
//     cin >> s;
//     map<char, int> lim;
//     for (int i = 0; i <26; i++)
//     {
//         lim[l[i]] = i + 1;
//     }
//     int count = 0;
//     int j = 1;
//     int sum = 0;
//     for (int i = 0; i < s.length()-1; i++)
//     {
//         int k = (lim[s[i]] - lim[s[j]]);
//         int l = (lim[s[j]] - lim[s[i]]);
//         if(k<=0){
//             k = k + 26;
//         }
//         else if(l<=0){
//             l = l + 26;
//         }
//         sum = sum + min(k, l);
//         j++;
//     }
//     int a = lim[s[0]] - 1;
//     int b = 1 - lim[s[0]];
//     if(a<=0){
//         a = a + 26;
//     }
//     else if(b<=0){
//         b = b + 26;
//     }
//     int f = min(a, b);
//     sum = sum + f;
//     cout << sum;
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

void solve()
{
    string s;
    cin >> s;
    char l1 = 'a';
    char l2 = 'a';
    int ct = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int ct1 = 0;
        int ct2 = 0;
  
        while (l1 != s[i])
        {
            ct1++;
            // debug(l1);
            l1--;
            if ((char)l1 < 'a')
            {
                l1 = 'z';
            }
        }
        // debug(ct1);
        while ((char)l2 != s[i])
        {
            ct2++;
            l2++;
            if (l2 > 'z')
            {
                l2 = 'a';
            }
        }
        // debug(ct2);
        ct += min(ct1, ct2);
    }
    cout << ct << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}