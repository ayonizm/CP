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
        int pos;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='1'){
                    int l = 0;
                for (int j = i+1; j < s.length(); j++)
                {
                    
                    if(s[j]=='0'){
                        l++;
                    }
                    else if(s[j]=='1'){
                        count += l;
                        l = 0;
                        i = j - 1;
                        break;
                    }
                    
                }
                
            }
        }
        cout << count << endl;
    }
    
    return 0;
}
