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
void pr(int n, int l = 1)
{
    if (l > n)
        return;
    cout << string(n - l, ' ') << string(2 * l - 1, '*') << endl;
    pr(n, l + 1);
}

int main()
{
    int n;
    cin >> n;
    pr(n);
    return 0;
}