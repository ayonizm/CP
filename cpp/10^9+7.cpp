#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
const ll M = 10 ^ 9 + 7;
int main()
{
    op();

    // (a + b) % M = ((a % M) + (b % M)) % M;
    // (a×b) % M = ((a % M)×(b % M)) % M;
    // (a−b) % M = ((a % M)−(b % M) + M) % M;
    // (a/b)%M=((a%M))*((1/b)%M))%M;
}

/*https://youtu.be/RCq5TYMZEwg?si=-S749rAmUUxmQu_R*/