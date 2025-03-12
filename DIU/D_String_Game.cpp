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

    string s;
    cin >> s;
    int cnt = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            cnt++;
    }

    one = n - cnt;
    int ans = min(cnt, one);

    if (ans & 1){

        cout << "Zlatan\n";
    }
    else{

        cout << "Ramos\n";
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