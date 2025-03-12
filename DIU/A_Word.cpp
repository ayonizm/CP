#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    int l1=0;
    int l2=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='a'&&s[i]<='z'){
            l1++;
        }
        else{

            l2++;
        }
        
    }
    if(l2>l1){
        for (int i = 0; i < s.length(); i++)
        {
            char gl;
            gl = toupper(s[i]);
            cout << gl;
        }
        
    }
    else{
        for (int i = 0; i < s.length(); i++)
        {
            char gl;
            gl = tolower(s[i]);
            cout << gl;
        }
    }
    return 0;
}