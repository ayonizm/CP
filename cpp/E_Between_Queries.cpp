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
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int m;
    cin >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        int q = upper_bound(x.begin(), x.end(), b)-x.begin();
        int p = lower_bound(x.begin(), x.end(), a)-x.begin();
        cout << q - p << endl;
    }
    
    

    return 0;
}