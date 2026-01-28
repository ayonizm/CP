#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
int main()
{
    op();
    double x;
    cin >> x;
    double f = sqrt(pow(x, 4) + 1) / (x * x);
    double s = (x) / sqrt(x * x + 1);
    double y = f - s;
    cout << fixed << setprecision(3) << y << endl;
    return 0;
}