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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        int r = 0;
        for (char c = 'A'; c <= 'G'; c++)
        {
            int f = 0;
            for (char x : s)
            {
                if (x == c)
                {
                    f++;
                }
            }
            r += max(0, m - f);
        }

        cout << r << endl;
    }
    return 0;
}