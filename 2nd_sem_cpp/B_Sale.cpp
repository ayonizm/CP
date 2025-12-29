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
int main(){
    op();
    ll n, m;
    cin >> n >> m;
    vector<ll> a;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    ll sum = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i] < 0)
        {
            sum += a[i];
        }
    }
    cout << abs(sum) << endl;

    return 0;
}