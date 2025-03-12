#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    int up = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i]<'A'||s[i]>'Z'){
            up = 0;
            break;
        }
    }
    if(up==1){
        if(s[0]>='A'&&s[0]<='Z'){
            char l = tolower(s[0]);
            cout << l;
        }
        else{
            char l = toupper(s[0]);
            cout << l;
        }
        for (int i = 1; i < s.length(); i++)
    {
        char o = tolower(s[i]);
        cout << o;
    }

    }
    else{
        cout << s;
    }
    
    return 0;
}