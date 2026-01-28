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
void solve (){
    
        int n, k;
        cin >> n >> k;
        int a[n];
        unordered_map<int, int> f;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i]]++;
        }

        int s = 0;

        for (int i = 0; i < n; i++)
        {
            if (f[a[i]] > 0)
            {
                int b = k - a[i];
                if (f[b] > 0)
                {
                    int p = min(f[a[i]], f[b]);
                    if (a[i] == b)
                    {
                        p /= 2;
                    }
                    s += p;
                    f[a[i]] -= p;
                    f[b] -= p;
                }
            }
        }

        cout << s << endl;
    }

int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    

    return 0;
}