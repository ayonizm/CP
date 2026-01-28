#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int count =0;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int a =min(s1.length(),s2.length());
        for(int i =0;i<a;i++){
            if(s1[i]==s2[i]){
                count++;
                s1[i] = '0';
                s2[i] = '0';
            }
            else{
                break;
            }
        }
        int flag = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if(s1[i]=='0'){
                flag = 1;
            }
            else{
                count++;
            }
        }
        for (int i = 0; i < s2.length(); i++)
        {
            if(s2[i]=='0'){
                flag = 1;
            }
            else{
                count++;
            }
            
        }
        if(flag){
            cout << count + 1 << endl;
        }
        else{
            cout << count  << endl;

        }
        
        
    }
}