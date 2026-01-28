#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            s[i] = tolower(s[i]);
        }
        if(s=="yes"){
            cout << "YES" << endl;
            
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}