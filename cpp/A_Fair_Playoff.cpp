#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> x;
    x.push_back(a);
    x.push_back(b);
    x.push_back(c);
    x.push_back(d);
    sort(x.begin(), x.end());
    if(x[2]==c&&x[3]==d||x[2]==d&&x[3]==c||x[2]==a&&x[3]==b||x[2]==b&&x[3]==a){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
int main(){
    op();
    ll a;
    cin >> a;
    while (a--)
    {
        solve();
    }
    
    return 0;
}