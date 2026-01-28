#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int khali[200];
    for (int i = 0; i < 200; i++)
    {
        khali[i] = 0;
    }
    int p, cost;
    scanf("%d %d", &p, &cost);
    // cout << p << " " << cost << endl;
    int arr[p];

    for (int i = 0; i < p; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < p; i++)
    {
        khali[arr[i]]++;
    }

    int m1 = 0, m2 = 0;
    for (int i = 0; i < 200; i++)
    {
        if (khali[i] == 1)
        {
            m1++;
        }
        if (khali[i] > 1)
        {
            m2++;
        }

        // printf("%d %d\n", m1, m2 );
    }
        int total = (m2 * cost) + m1;
        int oi = min(p, total);
        printf("%d\n", oi);
}
int main()
{

    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }

    return 0;
}
