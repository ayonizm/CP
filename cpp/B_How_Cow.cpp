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
int main()
{
    op();
    int n;
    cin >> n;
    while (n--)
    {
        double r;
        cin >> r;
        double pi = 3.1416;
        double s = pi * r * r;
        printf("%.3lf\n", s);
    }

    return 0;
}