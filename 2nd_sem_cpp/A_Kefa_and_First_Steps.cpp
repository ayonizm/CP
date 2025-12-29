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
    ll ar[n];
    ll m = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    if(n==1){
        cout << "1" << endl;
        return 0;
    }
    int ct = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (ar[i + 1] >= ar[i])
        {
            ct++;
        }
        else
        {
            ct = 1;
        }
            if (ct > m)
            {
                m = ct;
            }
    }
    
    cout << m << endl;

    return 0;
}