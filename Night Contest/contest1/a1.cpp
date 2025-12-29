#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

const int K = 1 << 18;
int p[K];
int m[K];

int f(int i)
{
    if (p[i] == i)
        return i;
    return p[i] = f(p[i]);
}

void u(int i, int j)
{
    int x = f(i);
    int y = f(j);
    if (x != y)
    {
        if (x < y)
            swap(x, y);
        p[y] = x;
        m[x] = max(m[x], m[y]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long s = 0;
    vector<int> c(K, 0);
    vector<bool> b(K, false);

    for (int i = 0; i < n; ++i)
    {
        int v;
        cin >> v;
        s += v;
        c[v]++;
        b[v] = true;
    }

    vector<int> d(K, -1);
    for (int i = 0; i < K; ++i)
    {
        if (b[i])
        {
            d[i] = i;
        }
    }

    for (int i = 0; i < 18; ++i)
    {
        for (int j = 0; j < K; ++j)
        {
            if ((j >> i) & 1)
            {
                d[j] = max(d[j], d[j ^ (1 << i)]);
            }
        }
    }

    long long w = 0;
    for (int i = 0; i < K; ++i)
    {
        if (c[i] > 1)
        {
            int x = (K - 1) ^ i;
            if (d[x] != -1)
            {
                w += (long long)(c[i] - 1) * (i + d[x]);
            }
        }
    }

    for (int i = 0; i < K; ++i)
    {
        p[i] = i;
        m[i] = i;
    }

    for (int i = K - 1; i >= 0; --i)
    {
        for (int j = i; j > 0; j = (j - 1) & i)
        {
            int k = i ^ j;
            if (j >= k)
                continue;
            if (b[j] && b[k])
            {
                int rj = f(j);
                int rk = f(k);
                if (rj != rk)
                {
                    w += i;
                    u(j, k);
                }
            }
        }
    }

    vector<bool> v(K, false);
    long long g = 0;
    for (int i = 0; i < K; ++i)
    {
        if (b[i])
        {
            int r = f(i);
            if (!v[r])
            {
                g += m[r];
                v[r] = true;
            }
        }
    }

    cout << w - s + g << endl;

    return 0;
}