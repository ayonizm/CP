#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
#define MAX 10000000
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
}
int main()
{
    op();
    sieve();
    ll k;

    while (cin >> k)
    {

        string s;
        s = to_string(k);
        string p = s;
        // cout << p;
        reverse(p.begin(), p.end());
        int r = stoi(p);
        if (flag[k])
        {

            if (p != s && flag[r])
            {
                cout << k << " is emirp." << endl;
            }
            else
            {

                cout << k << " is prime." << endl;
            }
        }
        else
        {

            cout << k << " is not prime." << endl;
        }
    }

    return 0;
}