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

    string s;
    cin >> s;

    int l = s.length();

    if (l == 2 && s[0] != s[1])
    {
        cout << "1" << endl;
        return 0;
    }
    if (l == 2 && s[0] == s[1])
    {
        cout << "2" << endl;
        return 0;
    }
    if (l == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    char z = 'Z';
    int ct = 0;

    int arr[s.length()];
    int p = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            z = s[i];
            ct++;
        }
        else
        {
            z = 'Z';
            ct = 0;
            ;
        }
        if (ct != 0)
        {
            arr[p] = ct;
            p++;
        }
    }

    int m = arr[0];
    for (int i = 0; i < p; i++)
    {
        if (arr[i] > m)
        {
            m = arr[i];
        }
    }

    cout << m + 1 << endl;
}