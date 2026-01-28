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
    ll n, m;
    cin >> n >> m;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        x.push_back(p);
    }
    while (m--)
    {
        ll p;
        cin >> p;
        auto it = upper_bound(x.begin(), x.end(), p);
        cout << it-x.begin()<< endl;
    }
    
    

    return 0;
}