#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
double eps = 1e-6;
double mal(int n, double m)
{
    double ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= m;
    }
    return ans;
}

int main()
{
    op();
    double x;
    cin >> x;
    int n;
    cin >> n;
    double lo = 0.0;
    double hi = x;
    double mid;
    while ((hi - lo) > eps)
    {
        mid = (hi + lo) / 2;
        if (mal(n, mid) < x)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    printf("%.6lf", lo);
    return 0;
}