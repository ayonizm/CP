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
const int N = 100010;
int a[N], pre[N];
void solve(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    pre[0] = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
        sum += a[i];
    }
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (pre[i] * 2 == sum){
            ans++;
        }
    }
    cout << ans << endl;
}
int main(){
    op();
    solve();

    return 0;
}