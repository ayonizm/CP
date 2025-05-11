#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}