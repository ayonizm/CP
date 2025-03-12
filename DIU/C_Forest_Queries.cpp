#include <bits/stdc++.h>
using namespace std;
#define ot()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int

const int MAX = 10000+20;
int arr[MAX][MAX];
int pf[MAX][MAX];


int main() {

    ot();
    ll n, m;

    cin >> n >> m;

    for (ll i = 1; i <= n; i++)
    {

        for (ll j = 1; j <= n; j++)
        {

            char st;

            cin >> st;

            arr[i][j] = (st == '*') ? 1 : 0;

            pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
        }
    }

    while (m--)
    {


        ll a, b, c, d;


        cin >> a >> b >> c >> d;

        ll res = pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1];
        cout << res << endl;
    }

    return 0;
}