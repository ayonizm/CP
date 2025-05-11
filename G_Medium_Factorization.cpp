#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
void sieve(int lim, vector<int> &p)
{
    vector<bool> pr(lim + 1, true);
    pr[0] = pr[1] = false;
    for (int i = 2; i <= lim; ++i)
    {
        if (pr[i])
        {
            p.push_back(i);
            for (int j = i * 2; j <= lim; j += i)
            {
                pr[j] = false;
            }
        }
    }
}

string fact(int n,vector<int> &p)
{
    string res = "1";
    if (n == 1)
    {
        return res;
    }
    for (int i = 0; i < p.size(); ++i)
    {
        if (p[i] * p[i] > n)
        {
            break;
        }
        while (n % p[i] == 0)
        {
            res += " x " + to_string(p[i]);
            n /= p[i];
        }
    }
    if (n > 1)
    {
        res += " x " + to_string(n);
    }
    return res;
}

int main()
{
    const int MX = 10000000;
    const int pp = sqrt(MX);
    vector<int> p;
    sieve(pp, p);
    int n;
    while (cin >> n)
    {
        cout << fact(n, p) << endl;
    }
    return 0;
}
