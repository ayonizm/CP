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
int r = 1;
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> x(a);
    for (int i = 0; i < a; i++)
    {
        cin >> x[i];
    }
    int ct = 0;
    int t2 = 0;
    int i = 0;
    while (i<a)
    {
        
        t2 += (x[i++]);
        if(ct+1>b||t2>c){
            break;
        }
        ct++;
    }

    cout << "Case " << r++  << ": " << ct << endl;
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