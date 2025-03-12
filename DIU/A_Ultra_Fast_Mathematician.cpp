#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int l = s1.length();
    for (int i = 0; i < l; i++)
    {
        if(s1[i]-'0'+s2[i]-'0'==1){
            cout << "1";
        }
        else if(s1[i]-'0'+s2[i]-'0'==0||s1[i]-'0'+s2[i]-'0'==2){
            cout << "0";
        }
    }
    

    return 0;
}