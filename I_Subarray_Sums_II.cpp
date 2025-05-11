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
    ll n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<ll, ll> m;
    ll ss = 0, ay = 0;
    for (int i = 0; i < n; i++)
    {
        m[ss]++;
        ss += arr[i];
        ay += m[ss - k];
    }
    cout << ay << endl;
}
int main(){
    op();
    ll n=1;
    while (n--)
    {
        solve();
    }
    

    return 0;
}