#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string one = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string rl;
    cin >> rl;
    string s;
    cin >> s;
    if(rl=="R"){
    for (int i = 0; i < s.length(); i++)
    {
        int tar = one.find(s[i]);
        cout << one[tar - 1];
    }
        
    }
    else{
        for (int i = 0; i < s.length(); i++)
    {
        int tar = one.find(s[i]);
        cout << one[tar + 1];
    }

    }
    
    return 0;
}