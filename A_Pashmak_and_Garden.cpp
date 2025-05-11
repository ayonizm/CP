#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dis;
    if (x1 == x2)
    {
        dis = abs(y1 - y2);
        cout << x1 + dis << ' ' << y1 << ' ' << x2 + dis << ' ' << y2 << '\n';
    }
    else if (y1 == y2)
    {
        dis = abs(x1 - x2);
        cout << x1 << ' ' << y1 + dis << ' ' << x2 << ' ' << y2 + dis << '\n';
    }
    else if(abs(x1-x2)==abs(y1-y2))
    {
        cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1 << '\n';
    }
    else{
        cout << -1;
    }
    return 0;
}