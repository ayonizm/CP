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
        int omg = 0;
        for (int i = 0; i < x; i++)
        {
            if(s[i]=='a'){
                s[i] = '0';
            }
            else if(s[i]=='b'||s[i]=='c'){
                s[i] = '1';
            }
            else{
                cout << "NO" << endl;
                omg = 1;
                break;
            }
        }
        if(omg){
            continue;
        }
        int j = 1;
        int flag = 1;
        for (int i = 0; i <x-1; i++)
        {
            if(s[i]==s[j]){
                flag = 0;
            }
            j++;
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}