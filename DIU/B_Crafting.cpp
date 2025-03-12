#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        long long ta = 0, tb = 0, surplus = 0, deficit = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ta += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            tb += b[i];
            if (a[i] < b[i])
            {
                deficit += b[i] - a[i];
            }
            else
            {
                surplus += a[i] - b[i];
            }
        }
        if (ta >= tb && surplus >= deficit)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
