#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string s;
    cin >> s;
    if(s[0]-'0'>s[2]-'0'){
        cout << s[0] << endl;
    }
    else if(s[0]-'0'<s[2]-'0'){
        cout << s[2] << endl;
    }
    else{
        cout << "=" << endl;
    }
    return 0;
}