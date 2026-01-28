#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string s;
    cin >> s;
    bool f = false;
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]=='3'&&s[i+1]=='7'){
            f = true;
            break;
        }
    }
    if(f){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}