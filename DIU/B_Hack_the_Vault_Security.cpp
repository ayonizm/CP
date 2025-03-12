#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    int count = 0;
    if(s[0]=='A'){
        count++;
    }
    if(s[1]=='A'||s[1]=='B'){
        count++;
    }
    if (s[2]=='A'||s[2]=='B'||s[2]=='C')
{
    count++;
}
if(count==3){
    cout << "Yes" << endl;
}
else{
    cout << "No" << endl;
}
        return 0;
}