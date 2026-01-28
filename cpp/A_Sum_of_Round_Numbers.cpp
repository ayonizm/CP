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
        int l = s.length();
        while (l--)
        {
            int pos = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if(isdigit(s[i])){
                    pos = i;
                    
                }
                else if(s[i]=='0'){
                    s.erase(s.begin() + 1);
                    continue;
                }
            }
            cout << s[pos];
            int k = s.length() - pos;
            for (int i = 0; i < k; i++)
            {
                cout << "0";
            }
            cout << " ";
            s.erase(s.begin() + pos);

        }
        
    }
    
    return 0;
}