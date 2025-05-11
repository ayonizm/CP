#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==','){
            s[i] = ' ';
        }
    }
    cout << s;

    return 0;
}