#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string s;
    cin >> s;
    int ct = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1'){
            ct++;
        }
    }
    cout << s;
    if(ct%2==0){
        cout << "0" << endl;
    }
    else{
        cout << "1" << endl;
    }

    return 0;
}