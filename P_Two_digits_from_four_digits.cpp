#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    string k = s.substr(1, 2);
    if(k[0]=='0'){
        k.erase(k.begin() + 0);
    }
    
    cout << k;
    return 0;
}