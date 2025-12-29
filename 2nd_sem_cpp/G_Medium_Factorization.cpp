#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
const int N = 1e7 + 10;
vector<bool> isPrime(N, true);
vector<int> lp(N, 0), hp(N, 0);
void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; ++i)
    {
        if (isPrime[i])
        {
            hp[i] = lp[i] = i;
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
            }
        }
    }
}

int main()
{
    op();
    sieve();
    ll num;
    while (cin >> num)
    {
        

        vector<int> prime_factors;

        while (num > 1)
        {
            int prime_factor = hp[num];
            num /= prime_factor;
            prime_factors.push_back(prime_factor);
        }
        sort(prime_factors.begin(), prime_factors.end());
        cout << "1";
        for (auto v : prime_factors)
        {
            cout << " x " << v;
        }
        cout << endl;
    }

    return 0;
}
