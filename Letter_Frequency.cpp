#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    getline(cin, s);
    int s1[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if(isupper(s[i])){
            s1[s[i] - 'A']++;
        }
        
        else if(islower(s[i])){
            s1[s[i] - 'a']++;
        }
    }
    int m = 0;
    for (int i = 0; i < 26; i++)
    {
        if(s1[i]>m){
            m = s1[i];
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(m==s1[i]){
            printf("%c", i + 'a');
        }
    }
        
    
    return 0;
}