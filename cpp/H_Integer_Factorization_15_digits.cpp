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
void sieve(ll n)
{
    ll count = 0;
    while (n % 2 == 0)
    {
        count++;
        n = n >> 1;
    }
    if (count > 0)
    {
        cout << "2^" << count << " ";
    }
    for (ll i = 3; i * i <= n; i = i + 2)
    {
        count = 0;
        while (n % i == 0)
        {
            count++;
            n = n / i;
        }
        if (count > 0)
        {
            cout << i << "^" << count << " ";
        }
    }
    if (n > 2)
    {
        cout << n << "^" << 1;
    }
}

int main()

{
    op();
    ll n;
    while (cin >> n && n != 0)
    {
        sieve(n);
        cout << endl;
    }
}