#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
int main()
{
    op();
    ll n;
    cin >> n;
    vector<ll> x;
    ll t = 0;
    while (n--)
    {
        ll p;
        cin >> p;
        x.push_back(p);
        t += p;
    }
        t = t / 2;

    
    // cout << t << endl;
    sort(x.begin(), x.end());
    ll y = 0;
    ll k = 0;
    for (int i = x.size() - 1; i >= 0; i--)
    {
        y += x[i];
        if (y > t)
        {
            k++;
            break;
        }
        k++;
    }
    cout<<k<<endl;
    return 0;
}