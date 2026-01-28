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
void solve(){

    int n, m;
    cin >> n >> m;
    int ct = 0;
    while (n < m)
    {
        if (m % 2 == 1)
        {
            ct++;
            m++;
        }
        else
        {
            ct++;
            m = m / 2;
        }
    }
    cout << ct + n - m << endl;
}
int main(){
    op();
        solve();
    return 0;
}