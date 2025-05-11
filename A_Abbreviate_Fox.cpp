#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
int main()
{
    op();
    ll n;
    string s;
    cin >> n >> s;
    string vai;
    for (ll i = 0; i < s.length(); i++)
    {
        vai += s[i];
        if (vai.length() >= 3)
        {
            if (vai.substr(vai.length() - 3) == "fox")
            {
                vai.erase(vai.length() - 3);
            }
        }
    }
    cout << vai.length() << endl;
    return 0;
}
