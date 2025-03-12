#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    string k=s;
    reverse(k.begin(), k.end());
    if(k==s){
        cout << "Yes" << endl;
        
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}