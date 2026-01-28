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
        for (int i = s.length()-1; i >= 0; i--)
        {
            if(s[i]=='0'){
                s.erase(s.begin() + i);
            }
            else{
                break;
            }
        }
        
        reverse(s.begin(), s.end());
        cout << s<<endl;
    }
    
    return 0;
}