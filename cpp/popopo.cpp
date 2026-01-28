#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
#define MAX 10000000
vector<bool> isP(MAX + 1, true);
vector<int> po(MAX + 1, 0);
void sieve()
{
    isP[0] = isP[1] = false;
    for (int i = 2; i * i <= MAX; i++)
    {
        if (isP[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                isP[j] = false;
            }
        }
    }
}
void precom()
{
    set<int> pri;
    for (int x = 1; x * x <= MAX; ++x)
    {
        for (int y = 1; y * y * y * y <= MAX; ++y)
        {
            int value = x * x + y * y * y * y;
            if (value <= MAX && isP[value])
            {
                pri.insert(value);
            }
        }
    }
    for (int val : pri)
    {
        po[val] = 1;
    }
    for (int i = 1; i <= MAX; i++)
    {
        po[i] += po[i - 1];
    }
}

int main()
{
    op();
    sieve();
    precom();

    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << po[k] << endl;
    }

    return 0;
}
