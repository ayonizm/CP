#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

void f()
{
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    long long a = 31, b = 1e9 + 7;
    long long c = 37, d = 1e9 + 9;

    long long e = 0, f = 0;
    long long g = 1, h = 1;

    for (int j = 0; j < k - 1; ++j)
    {
        g = (g * a) % b;
        h = (h * c) % d;
    }

    set<pair<long long, long long>> i;

    if (n < k)
    {
        cout << 0 << endl;
        return;
    }

    for (int j = 0; j < k; ++j)
    {
        e = (e * a + (s[j] - '0' + 1)) % b;
        f = (f * c + (s[j] - '0' + 1)) % d;
    }
    i.insert({e, f});

    for (int j = 1; j <= n - k; ++j)
    {
        e = (e - ((s[j - 1] - '0' + 1) * g) % b + b) % b;
        e = (e * a) % b;
        e = (e + (s[j + k - 1] - '0' + 1)) % b;

        f = (f - ((s[j - 1] - '0' + 1) * h) % d + d) % d;
        f = (f * c) % d;
        f = (f + (s[j + k - 1] - '0' + 1)) % d;

        i.insert({e, f});
    }

    cout << i.size() << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f();
    return 0;
}