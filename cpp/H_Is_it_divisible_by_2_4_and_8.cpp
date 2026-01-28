#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
     string s;
    cin >> s;
    int lo = (s[s.length() - 3] - '0' )*100;
    int k =(s[s.length()-2]-'0')*10;
    int m =(s[s.length()-1]-'0');
    int n = k + m+lo;
    if(n%2==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    if(n%4==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    if(n%8==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}