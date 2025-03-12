#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b;
    cin >> a >> b;
    for (int i = a; i <=b; i++)
    {
        string s = to_string(i);
        if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] &&s[1] != s[2] && s[1] != s[3] &&s[2]!=s[3]) 
            {
              cout << i << " ";
            }

        
    }
    
    return 0;
}