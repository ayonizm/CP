#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
void solve(){
    int n;
    cin >> n;
    set<int> x;
    map<int, int> p;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        x.insert(k);
        p[k]++;
    }
    int sum = 0;
    for(auto v:x){
        sum += (p[v] / 2);
    }
    cout << sum << endl;
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