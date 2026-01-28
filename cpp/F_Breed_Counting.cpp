#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
const int N = 1e5 + 10; 
int pref1[N], pref2[N], pref3[N];
void solve()
{
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        pref1[i] = pref1[i - 1];
        pref2[i] = pref2[i - 1];
        pref3[i] = pref3[i - 1];
        if (k == 1)
            pref1[i]++;
        else if (k == 2)
            pref2[i]++;
        else
            pref3[i]++;
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << pref1[b] - pref1[a - 1] << ' ' << pref2[b] - pref2[a - 1] << ' ' << pref3[b] - pref3[a - 1] << endl;
    }
}
int main()
{
    solve();
    return 0;
}