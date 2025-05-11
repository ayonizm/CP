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
    int a, b, c;
    cin >> a >> b >> c;

    if (b < -a * c || b > a * c)
    {
        cout << -1 << endl;
        return;
    }

    if (b == 0)
    {
        cout << 0 << endl;
        return;
    }

    int kk = (abs(b) + c - 1) / c; 

    if (kk > a)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << kk << endl;
    }
}
int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    

    return 0;
}