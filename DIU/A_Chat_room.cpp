#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    vector<char> x;
    
    
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='h'||s[i]=='e'||s[i]=='l'||s[i]=='o'){

        x.push_back(s[i]);
        }
    }

    string k;
    for(auto v:x){
        k += v;
    }
    int count = 0;
    string il;
    for (int i = 0; i < k.length(); i++)
    {
        if(k[i]=='h'&&count==0){
            il += k[i];
            count++;
        }
        else if(k[i]=='e'&&count==1){
            il += k[i];
            count++;
        }
        else if(k[i]=='l'&&count==2){
            il += k[i];
            count++;
        }
        else if(k[i]=='l'&&count==3){
            il += k[i];
            count++;
        }
        else if(k[i]=='o'&&count==4){
            il += k[i];
            count++;
        }
        
        
    }
    if(il=="hello"){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}