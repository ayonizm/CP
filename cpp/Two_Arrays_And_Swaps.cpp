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
    int k;
    cin >> k;
    vector<int> x;
    vector<int> y;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        x.push_back(p);
    }
    
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        y.push_back(p);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end(),greater<int>());
    for (int i = 0; i < k; i++)
    {
       if(x[i]<y[i]){
           swap(x[i], y[i]);
       }
    }
    int r = 0;
    for(auto v:x){
        r += v;
    }
    cout << r << endl;
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