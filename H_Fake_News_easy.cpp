#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='h'&&count==0){
            count++;
        }
        if(s[i]=='e'&&count==1){
            count++;
        }
        if(s[i]=='i'&&count==2){
            count++;
        }
        if(s[i]=='d'&&count==3){
            count++;
        }
        if(s[i]=='i'&&count==4){
            count++;
        }
    }
    if(count==5){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}