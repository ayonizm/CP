#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string s;
    cin >> s;
    int pos;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='.'){
            pos = i;
            break;
        }
    }
    int flag = 1;
    for (int i = pos+1; i < s.length(); i++)
    {
        if(s[i]!='0'){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "Integer" << endl;
    }
    else{
        cout << "Float" << endl;
    }
    

    return 0;
}