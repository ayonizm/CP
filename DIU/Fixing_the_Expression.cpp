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
        string s;
        cin >> s;
        ll i1 = s[0] - '0';

        ll i2 = s[2] - '0';
        if(i1>i2){
            s[1] = '>';
        }
        else if(i1<i2){
            s[1] = '<';
        }
        else{
            s[1] = '=';
        }
        cout << s << endl;
    }
    
    return 0;
}