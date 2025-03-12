#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
void solve() {
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] - '0' >= d) {
            cout << s[i];
        } else {
            cout << d;
            for (int j = i; j < n; j++) {
                cout << s[j];
            }
            cout << endl;
            return;
        }
    }
    cout << d << endl;
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