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
        ll a;
        cin >> a;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='U'){
                cout << "D";
            }
            else if(s[i]=='D'){
                cout << "U";
            }
            else{
                cout << s[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}