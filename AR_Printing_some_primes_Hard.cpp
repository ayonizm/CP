#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to implement the Sieve of Eratosthenes to generate primes up to a given limit
vector<long long> sieve_of_eratosthenes(long long limit)
{
    vector<bool> sieve(limit + 1, true);
    sieve[0] = sieve[1] = false; // 0 and 1 are not prime

    for (long long i = 2; i <= sqrt(limit); ++i)
    {
        if (sieve[i])
        {
            for (long long j = i * i; j <= limit; j += i)
            {
                sieve[j] = false;
            }
        }
    }

    vector<long long> primes;
    for (long long i = 2; i <= limit; ++i)
    {
        if (sieve[i])
        {
            primes.push_back(i);
        }
    }

    return primes;
}

int main()
{
    long long limit = 1000000000;

    vector<long long> primes = sieve_of_eratosthenes(limit);
    for (int i = 0; i < primes.size(); i += 500)
    {
        cout << primes[i] << endl;
    }

    return 0;
}
