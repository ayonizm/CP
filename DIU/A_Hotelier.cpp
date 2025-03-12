#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string k="0000000000";
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='L'){
            for (int j = 0; j < k.length(); j++)
            {
                if(k[j]=='0'){
                    k[j] = '1';
                    break;
                }
            }
            
        }
        else if(s[i]=='R'){
            for (int j = k.length()-1; j >=0; j--)
            {
                if(k[j]=='0'){
                    k[j] = '1';
                    break;
                }
            }
            
        }
        else{
            int a = s[i] - '0';
            k[a] = '0';
        }
    }
    cout << k << endl;
    return 0;
}