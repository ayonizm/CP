#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    int a = (s[s.length() - 2])-'0';
    int b = (s[s.length() - 1])-'0';
    a = a * 10;
    int k = a + b;

    if(k%4==0||k%7==0){
        cout << "Lucky" << endl;
        
    }
    else{
        cout << "Not Lucky" << endl;
    }
    return 0;
}