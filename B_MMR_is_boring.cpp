#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    int m=0;
    int c;
    for(int i=0;i<s.length();i++){
       if(s[i+1]==s[i]){
             c=0;
        for(int j=i;j<s.length();j++){
            if(s[j]==s[j+1]){
                c++;
            }
            else{
                    i=j+1;
                break;
            }
        }
        if(m<c){
            m=c;
        }
       }

    }
    cout<<m+1<<endl;
return 0;
}
