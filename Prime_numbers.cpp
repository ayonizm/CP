#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
#define MAX 30001000
bool flag[MAX + 1];
ll prime[MAX + 5];
ll total = 0;
void sieve()
{
    flag[0] = false;
    flag[1] = false;
    for (ll i = 2; i <= MAX; i++)
    {
        flag[i] = true;
    }
    ll f = sqrt(MAX);
    for (ll i = 0; i <= f; i++)
    {
        if (flag[i])
        {
            for (ll j = i * i; j <= MAX; j += i)
            {
                flag[j] = false;
            }
        }
    }
    for (ll i = 2; i <= MAX; i++)
    {
        if (flag[i])
        {
            prime[total++] = i;
        }
    }
}
int main()
{
    op();
    sieve();
    ll n, m;
    cin >> n >> m;

    if (n == m&&flag[n]!=true)
    {
        cout << "Absent" << endl;
        return 0;
    }
    int k1 = min(n, m);
    int k2 = max(n, m);
    ll tr = 0;
    for (int i = k1; i <= k2; i++)
    {
        if (flag[i])
        {
            cout << i << endl;
            tr = 1;
        }
    }
    if(tr==0){
        cout << "Absent" << endl;
    }

    return 0;
}