#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    while (1)
    {
        
        string s;
        getline(cin, s);
        if(s=="DONE"){
            break;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
                s[i] = tolower(s[i]);
                continue;
            }
            else{
                s.erase(s.begin() + i);
                i--;
            }
        }

        string k = s;
        reverse(k.begin(), k.end());
        if(s==k){
            cout << "You won't be eaten!" << endl;
        }
        else{
            cout << "Uh oh.." << endl;
            
        }
        }
    
    return 0;
}