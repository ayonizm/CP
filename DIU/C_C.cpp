#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
void solve(int a)
{
    if (a < 10)
    {
        cout << a << " ";
        return;
    }
    else
    {
        int p = a % 10;
        a = a / 10;
        solve(a);
        cout << p << " ";
    }
}

int main()
{
    op();
    ll t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        solve(a);
        cout << endl;
    }
    return 0;
}