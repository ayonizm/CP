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
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, a, b;
        cin >> n >> x >> a >> b;
        cout << min(n - 1, abs(a - b) + x) << endl;
    }

    return 0;
}