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
    int n;
    string str;

    cin >> n;
    while (n--)
    {

        cin >> str;

        if (str.length() == 5)
            cout << 3 << endl;
        else if ((str[0] == 'o' && str[1] == 'n') || (str[1] == 'n' && str[2] == 'e') || (str[0] == 'o' && str[2] == 'e'))
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}