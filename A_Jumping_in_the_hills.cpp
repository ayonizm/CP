#include <bits/stdc++.h>
using namespace std;
#define l1 long long int
#define endl "\n"
#define ot()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    l1 a;
    cin >> a;
    while (a--)
    {
        l1 n, u, d;
        cin >> n >> u >> d;
        vector<l1> v;
        for (int i = 0; i < n; i++)
        {
            l1 h;
            cin >> h;
            v.push_back(h);
        }
        l1 p = 1;
        l1 f = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1] >= v[i])
            {
                if ((v[i + 1] - v[i]) <= u)
                {
                    p++;
                    // cout << 1;
                }
                else
                {
                    break;
                }
            }
            else if (v[i + 1] <= v[i])
            {
                if ((v[i] - v[i + 1]) <= d)
                {
                    p++;
                    // cout << 2;
                }
                else
                {
                    if (f == 0)
                    {
                        p++;
                        f = 1;
                    }
                    else{
                        break;
                    }
                }
            }
            
        }
        cout << p << endl;
    }
}