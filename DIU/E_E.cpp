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
int sum(int id, int n, int a[])
{
    if (id == n)
        return 0;
    return a[id] + sum(id + 1, n, a);
}

int main()
{
    op();
    int n, id, t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        id = 0;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        cout << "Case " << i << ": " << sum(id, n, a) << endl;
    }

    return 0;
}