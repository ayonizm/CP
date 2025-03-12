#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ot()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{

    ot();
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int e = a + b;
    int f = a + c;
    int g = a + d;
    int h = b + c;
    int i = b + d;
    int j = c + d;

    int flag = 0;

    if ( e == h || e == i || e == j)
    {
        flag = 1;
    }
    else if (f == g || f == h || f == i || f == j)
    {
        flag = 1;
    }
    else if (g == h || g == i || g == j)
    {
        flag = 1;
    }
    else if (i == j)
    {
        flag = 1;
    }
    else if (a + b + c == d || b + c + d == a || a + b + d == c || a + c + d == b)
    {
        flag = 1;
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }

    else if (flag == 0)
    {
        cout << "NO" << endl;
    }
}