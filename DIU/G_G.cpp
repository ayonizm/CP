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
int re(int a)
{

    if (a == 1)
    {
        return 1;
    }
    if (a % 2 == 0)
    {
        return 1 + re(a / 2);
    }
    else
    {
        return 1 + re(3 * a + 1);
    }
}

int main()
{
    int l;
    cin >> l;                         
    cout << re(l) << endl;
    return 0;
}