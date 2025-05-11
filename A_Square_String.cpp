#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(s.length()%2!=0){
            cout << "NO" << endl;
            continue;
        }
        else{
            string s1 = s.substr(0, s.length() / 2);
            string s2 = s.substr(s.length() / 2,s.length());
            int flag = 1;
            for (int i = 0; i < s.length()/2; i++)
            {
                if(s1[i]!=s2[i]){
                    flag = 0;
                }
            }
            if(flag){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}