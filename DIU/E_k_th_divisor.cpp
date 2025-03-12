#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
int main()
{
    op();
    long long int n, y;
    cin >> n >> y;
    vector<long long int> x;
    for (long long int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            x.push_back(i);
            if (n / i != i)
            {
                x.push_back(n / i);
            }
        }
    }
    sort(x.begin(), x.end());

    if (x.size() < y)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << x[y - 1] << endl;
    }
    return 0;
}