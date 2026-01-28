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
    vector<ll> p;
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if(k==1){
            f = 1;
        }
        p.push_back(k);
    }
    int u=0;
    if(f){
        u++;
    }
    int k = *max_element(p.begin(), p.end());
    int r = 5 * n;
    int l = r - k;
    u = u + (l / k);
    cout << u << endl;

    return 0;
}