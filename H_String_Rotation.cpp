#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define MOD1 998244353
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int
void solve(){
    string s;
    cin >> s;
    string k;
    cin >> k;
    bool f = false;
    for (int i = 0; i < s.length(); i++)
    {
        if(s==k){
            f = true;
            break;
        }
        else{
            char p = k[0];
            k.erase(k.begin());
            k = k + p;
        }
    }
    if(f){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
int main(){
    op();
    solve();

    return 0;
}