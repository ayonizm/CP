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

    int n;
    cin >> n;
    if (n <= 4)
    {
        cout << "0 " << n << endl;
    }
    if (n > 4)
    {
        cout << "1 " << (n - 1) << endl;
    }
}
int main(){
    op();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}