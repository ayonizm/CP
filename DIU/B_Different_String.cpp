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
    set<char> x;
        string s;
        cin >> s;
        for (int i = 0; i <s.length() ; i++)
        {
            x.insert(s[i]);
        }

        if(x.size()>1){
            cout << "YES" << endl;
            string l = s;
            for (int i = 0;i<s.length()-1; i++)
            {
                for (int j = 1+i; j < s.length(); j++)
                {
                    if(s==l){
                        swap(s[i], s[j]);
                    }
                    else{
                        break;
                    }
                }
                
            }
            cout << s << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}