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
    string t, p, m, s;
    int h;
    cin >> t;
    p = t.substr(8, 2);
    h = stoi(t.substr(0, 2));
    m = t.substr(3, 2);
    s = t.substr(6, 2);
    if (p == "AM" && h == 12)
        h = 0;
    if (p == "PM" && h != 12)
        h += 12;
    printf("%02d:%s:%s\n", h, m.c_str(), s.c_str());
    return 0;
}