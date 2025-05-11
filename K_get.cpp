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
int ct = 1;
void solve(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Case " << ct++ << ":" << endl;
    int n;
    cin >> n;
    while (n--)
    {
        
        int a, b;
        cin >> a >> b;
        if(a>=x1&&a<=x2&&b>=y1&&b<=y2){
            Yes;
        }
        else{
            No;
        }
    }
    

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