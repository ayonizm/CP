#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

bool isPossible(double m, const vector<double> &a, double k)
{
    double needed = 0;
    double available = 0;
    for (double x : a)
    {
        if (x > m)
        {
            available += (x - m) * (100 - k) / 100;
        }
        else
        {
            needed += m - x;
        }
    }
    return available >= needed;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<double> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    double left = 0;
    double right = *min_element(a.begin(), a.end());
    double ans = 0;
    for (int i = 0; i < 100; ++i)
    {
        double mid = (left + right) / 2;
        if (isPossible(mid, a, k))
        {
            ans = mid;
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    cout << fixed << setprecision(9) << ans << endl;
}

int main()
{
    solve();
    return 0;
}