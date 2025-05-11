#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    char x = s[0];
    s[0] = s[s.length() - 1];
    s[s.length() - 1]=x;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='0'){
            s.erase(s.begin() + i);
            i--;
        }
        else{
            break;
        }
    }
    
    cout << s;
    return 0;
}