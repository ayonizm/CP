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
    

}
int main(){
    op();
    ll n, m;
    cin >> n >> m;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    while (m--)
    {
        int k;
        cin >> k;
        cout << upper_bound(x.begin(), x.end(), k)-x.begin()<<" ";
    }
    

    

    return 0;
}