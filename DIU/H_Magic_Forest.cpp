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
int main(){
    op();
    ll n;
   ll count = 0;
    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i; j <= n; j++)
        {
            for (ll k = j; k <= n; k++)
            {
                if ((i ^ j ^ k) == 0 && i + j > k && j + k > i && i + k > j)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}