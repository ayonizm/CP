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
void solve(){
    ll a, b, d, e;
    cin >> a >> b >> d >> e;
    ll m = 0;
    ll ay[3] = {d - b, e - d, a + b};
    for (int i = 0; i < 3; i++)
    {
        int c = ay[i];
        int f = 0;
        if (a + b == c)
        {
            f++;
        }
        if (b + c == d)
        {
            f++;
        }
        if (c + d == e)
        {
            f++;
        }
        if (f > m)
        {
            m = f;
        }
    }
    cout << m << endl;
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