#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    map<char, int> x;
    while(n--){

    string s;
    cin >> s;
    int flag = 1;

        
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='r'||s[i]=='g'||s[i]=='b')
        {
            x[s[i]]++;
        }
        if(s[i]=='R'||s[i]=='G'||s[i]=='B') {
            char to = tolower(s[i]);
            if(x[to]==0){
                flag = 0;
                break;
            }
           
        }
    }
    
    
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    s.clear();
    x.clear();
    }
    return 0;
}