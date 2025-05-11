#include <bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

vector<ll> primefactor(ll n) {
    vector<ll> factors;
    if (n == 1) {
        factors.push_back(1);
        return factors;
    }
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (ll i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    op();
    ll a;
    while (1) {
        cin >> a;
        if (a == 0){
            break;
        }

        if (a == 1) { 
            cout << "1 = 1" << endl;
            continue;
        }

        cout << a << " = ";
        if (a < 0) {
            cout << "-1 x ";
            a = abs(a);
        }

        vector<ll> factors = primefactor(a);
        for (ll i = 0; i < factors.size(); i++) {
            cout << factors[i];
            if (i < factors.size() - 1) {
                cout << " x ";
            }
        }
        cout << endl;
    }

    return 0;
}
