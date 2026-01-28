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
#define MAX_LIMIT 500000000  
#define MAX_NTH_PRIME 50000000
vector<int> primes; 
void sieve()
{
    vector<bool> is_prime(MAX_LIMIT + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (long long i = 2; i * i <= MAX_LIMIT; i++)
    {
        if (is_prime[i])
        {
            for (long long j = i * i; j <= MAX_LIMIT; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= MAX_LIMIT && primes.size() < MAX_NTH_PRIME; i++)
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
    int n;
    cin >> n;
    cout << primes[n - 1] << endl; 

    return 0;
}