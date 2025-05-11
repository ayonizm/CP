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
void solve()
{
    char a, b, c, d, e, f, g, h, i;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    cin >> g >> h >> i;

    if ((a == b && b == c) && a != '.')
    {
        cout << a << endl;
        return;
    }
    if ((d == e && e == f) && d != '.')
    {
        cout << d << endl;
        return;
    }
    if ((g == h && h == i) && g != '.')
    {
        cout << g << endl;
        return;
    }
    if ((a == d && d == g) && a != '.')
    {
        cout << a << endl;
        return;
    }
    if ((b == e && e == h) && b != '.')
    {
        cout << b << endl;
        return;
    }
    if ((c == f && f == i) && c != '.')
    {
        cout << c << endl;
        return;
    }
    if ((c == e && e == g) && c != '.')
    {
        cout << c << endl;
        return;
    }
    if ((a == e && e == i) && a != '.')
    {
        cout << a << endl;
        return;
    }
    cout << "DRAW" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}