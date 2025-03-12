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
        string k;
        cin >> k;
        int l = s.find(k);
        if(l==string::npos||s.length()==1){
            cout << "NO" << endl;
        }
        else if(l!=string::npos&&s.length()==3){
        
            cout << "NO" << endl;
        }
        else if(l!=string::npos&&s.length()>1){
            cout << "YES" << endl;
        }
    }
    
    return 0;
}