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
    int n, k;
    cin >> n >> k;
    if (k % 2 == 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << n << " ";
        }
        cout << n - 1 << endl;
    }
    else
    {
        for (int i = 0; i < n - 2; i++)
        {
            cout << n - 1 << " ";
        }
        cout << n << " " << n - 1 << endl;
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