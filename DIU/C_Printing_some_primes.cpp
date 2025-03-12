#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
#define MAX 100000000
vector<ll> primes;
void sieve()
{
    vector<bool> is_prime(MAX + 1, true);
    is_prime[0] =  false;
    is_prime[1] = false;

    for (ll i = 2; i * i <= MAX; i++)
    {
        if (is_prime[i])
        {
            for (ll j = i * i; j <= MAX; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (ll i = 2; i <= MAX; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    op();
    sieve();
    for (ll i = 0; i < primes.size(); i += 100)
    {
        cout << primes[i] << endl;
    }
    return 0;
}