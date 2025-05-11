#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string s;
    cin >> s;
    int flag = 0;
    if(s[0]=='-'){
        flag = 1;
    }
    if(flag){
        
        reverse(s.begin()+1, s.end());
    cout<<s<<endl;
    }
    else{
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}