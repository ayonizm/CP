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
    ll a;
    cin >> a;
    ll y = a;
    vector<ll> x;
    while (a--)
    {
        ll k;
        cin >> k;
        x.push_back(k);
    }
    if(y==1){
        cout << "0" << endl;
        return 0;
    }
    ll m = -1;
    ll pos = 0;
    for (ll i = 0; i < x.size(); i++)
    {
        if (x[i] > m)
        {
            m = x[i];
            pos = i + 1;
        }
    }
    if (y % 2 != 0 && pos == (y / 2) + 1)
    {
        cout << (y / 2) + 1 << endl;
        return 0;
    }
    if (y % 2 == 0)
    {
        if (pos >= (y / 2))
        {
            cout << y - pos + 1 << endl;
        }
        else
        {
            cout << pos - 1 << endl;
        }
    }
    else{
        if(pos>(y/2)+1){

            cout << y - pos + 1 << endl;
        }
        else{
            cout << pos << endl;
        }
    }
    return 0;
}