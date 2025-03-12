#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x1 = min(a, b);
        ll x2 = max(a, b);
        ll y1 = min(c, d);
        ll y2 = max(c, d);
        cout << x1 << " " << x2 << " " << y1 << " " << y2;
        int s1 = x1 - y1;
        int s2 = x2 - y2;
        cout << " " << s1 << " " << s2 << endl;
        
        if(x1>y1&&x2>y2){
            cout << "NO" << endl;
        }
        else if(x1<y1&&x2<y2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}