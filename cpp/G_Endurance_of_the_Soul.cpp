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
#define MAX 1000001
vector<int> sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
    return primes;
}

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> pr = sieve(n);
    vector<int> hy;
    for (int p : pr)
    {
        if (p >= m && p <= n)
        {
            hy.push_back(p);
        }
    }
    int ct = 0;
    int l = 0;

    for (int b : hy)
    {
        if (b - l >= x)
        {
            ct++;
            l = b;
        }
    }

    cout << ct << endl;

    return 0;
}