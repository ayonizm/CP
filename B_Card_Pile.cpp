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

int main()
{
    op();
    ll n;
    cin >> n;
    stack<int> x;
    while (n--)
    {
        int k;
        cin >> k;

        if (k == 2)
        {
            if (!x.empty())
            {
                cout << x.top() << endl;
                x.pop();
            }
            else
            {
                cout << "0" << endl;
            }
        }
        else if (k == 1)
        {
            int r;
            cin >> r;
            x.push(r);
        }
    }

    return 0;
}