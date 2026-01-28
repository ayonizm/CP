#include <bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define MAX 10000001
#define ll long long int
bool prime[MAX];
void sieve() {
    fill(prime, prime + MAX, true);
    prime[0] = prime[1] = false;
    for (ll i = 2; i * i < MAX; i++) {
        if (prime[i]) {
            for (ll j = i * i; j < MAX; j += i) {
                prime[j] = false;
            }
        }
    }
}
ll digit_sum(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    op();
    sieve(); 
    
    ll x;
    cin >> x;

    ll sum = digit_sum(x);
    if (prime[x] && prime[sum]) {
        cout << "Freedom!" << endl;
    } else {
        cout << "Bad luck!" << endl;
    }

    return 0;
}
