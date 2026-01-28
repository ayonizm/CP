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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = s.find("A");
    int j = s.rfind("B");
    // debug(i);
    // debug(j);
    if(i<0){
        i = n-1;
    }
    if(j<0){
        j = 0;
    }
    if(i>j){
        cout << 0 << endl;
    }
    else{
        cout << abs(j - i) << endl;
    }
    // int ct = 0;
    // for (int i = 0; i < n;i++ )
    // {
    //     if(s[i]=='A'&&s[j]=='B'&&i<j){
    //         swap(s[i], s[j]);
    //         ct++;
    //         j++;
    //         while(j<n){
    //             if(s[j]=='B'){
    //                 break;
    //             }
    //             j++;
    //         }
    //     }
   
    // }
    // cout << ct << endl;
}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}


// after contest
// AI........................................................
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
void f()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    while (i < n && s[i] == 'B')
    {
        i++;
    }
    if (i == n)
    {
        cout << 0 << endl;
        return;
    }
    vector<int> v;
    int c = 0;
    char p = ' ';
    if (i < n)
    {
        p = s[i];
    }
    for (int j = i; j < n; ++j)
    {
        if (s[j] == p)
        {
            c++;
        }
        else
        {
            v.push_back(c);
            p = s[j];
            c = 1;
        }
    }
    if (c > 0)
    {
        v.push_back(c);
    }
    long long a = 0;
    for (size_t j = 0; j + 1 < v.size(); j += 2)
    {
        a += (long long)v[j] + v[j + 1] - 1;
    }
    cout << a << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        f();
    }
    return 0;
}