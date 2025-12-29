#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
map<int, double> g = {
    {80, 4.00}, {75, 3.75}, {70, 3.50}, {65, 3.25}, {60, 3.00}, {55, 2.75}, {50, 2.50}, {45, 2.25}, {40, 2.00}, {0, 0.00}};
int i = 0;
void solve(){
    i++;
    int c;
    cin >> c;

    double ay = 0, tc = 0;
    int f = 0;

    for (int j = 0; j < c; j++)
    {
        double m, n;
        cin >> m >> n;

        double gp = 0;
        for (auto it = g.rbegin(); it != g.rend(); ++it)
        {
            if (m >= it->first)
            {
                gp = it->second;
                break;
            }
        }

        if (gp == 0.00)
        {
            f++;
        }

        ay += gp * n;
        tc += n;
    }

    if (f > 0)
    {
        if (f == 1)
        {
            printf("Case %d: Sorry, you have failed in 1 course!\n", i);
        }
        else
        {
            printf("Case %d: Sorry, you have failed in %d courses!\n", i, f);
        }
    }
    else
    {
        printf("Case %d: %.2f\n", i, ay / tc);
    }
}
int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}