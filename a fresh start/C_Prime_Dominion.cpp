#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

const int A = 200001;
bool p[A];

void s()
{
    fill(p, p + A, true);
    p[0] = p[1] = false;
    for (int i = 2; i * i < A; ++i)
    {
        if (p[i])
        {
            for (int j = i * i; j < A; j += i)
            {
                p[j] = false;
            }
        }
    }
}

int d(int a, int b)
{
    if (a == 0)
        return b;
    return __gcd(a, b);
}

void f()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int r = -1;
    for (int i = 0; i < n; ++i)
    {
        int c = 0;
        for (int j = i; j < n; ++j)
        {
            c = d(c, a[j]);
            if (c > 1 && p[c])
            {
                r = max(r, j - i + 1);
            }
            if (c == 1)
            {
                break;
            }
        }
    }
    cout << r << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    s();
    int t;
    cin >> t;
    while (t--)
        f();
    return 0;
}