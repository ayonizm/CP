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
        int x;
        cin >> x;
        string s;
        cin >> s;
        string k;
        string l;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]>='a'&&s[i]<='z'){
                k += s[i];
                l += s[i];
            }
        }
        int j = 1;
        int flag = 1;
        for (int i = 0; i < s.length()-1; i++)
        {
            if(s[i]>='a'&&s[i]<='z'&&s[j]>='0'&&s[j]<='9'){
                flag = 0;
                break;
            }
        }
        
        sort(k.begin(), k.end());
        if(flag){
            if(l==k){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}