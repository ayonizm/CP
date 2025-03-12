#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int f;
    cin >> f;
    string s;
    cin >> s;
    int z = 0;
    int n = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='n'){
            n++;
        }
        else if(s[i]=='z'){
            z++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "1 ";
    }
    for (int i = 0; i < z; i++)
    {
        cout << "0 ";
    }
    
    

    return 0;
}