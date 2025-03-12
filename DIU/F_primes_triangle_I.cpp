#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int

const ll MAX = 100000000;
vector<bool> is_prime(MAX + 1, true);
pair<int, int> pp[MAX + 1];
vector<int> primes;

void sieve_and_precompute()
{
    is_prime[0] = is_prime[1] = false;
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
    int row = 1, col = 1, count = 0;
    for (ll i = 2; i <= MAX; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            pp[i] = {row, col};
            col++;
            count++;
            if (count == row)
            {
                row++;
                col = 1;
                count = 0;
            }
        }
    }
}

int main()
{
    op();
    sieve_and_precompute();
    ll v;
    cin >> v;
    while (v--)
    {
        ll n;
        cin >> n;
        if (is_prime[n])
        {
            cout << pp[n].first << " " << pp[n].second << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
