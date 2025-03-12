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
    int x;
    cin >> x;

    int t = 0;
    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= 9; ++j)
        {
            t += i * j;
        }
    }

    int c = 0;
    for (int i = 1; i <= 9; ++i)
    {
        if (x % i == 0)
        {
            int j = x / i;
            if (j >= 1 && j <= 9)
            {
                c += x;
            }
        }
    }

    cout << t - c << endl;
    return 0;
}