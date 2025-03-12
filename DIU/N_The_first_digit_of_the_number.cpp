#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    if(isdigit(s[0])){
        cout << s[0];
    }
    else{
        cout << s[1];
    }
    return 0;
}