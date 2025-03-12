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
int q[N];
int main()
{
    op();
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> q[i];
    }
    ll ay = 0;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        ll sum = 0;
        for (int i = a; i <= b; i++)
        {
            sum += q[i];
        }
        if (sum > 0)
        {
            for (int i = a; i <= b; i++)
            {
                ay += q[i];
            }
        }
    }
    cout << ay << endl;
    return 0;
}