#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a;
    cin >> a;
    string s;
    cin >> s;
    string k;
    ll sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='0'&&s[i]<='9'){
            sum +=(s[i] - '0');
        }
    }
    
    
    if(sum%3==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}