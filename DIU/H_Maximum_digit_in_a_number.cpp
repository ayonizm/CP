#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    int max=s[0]-'0';
    for (int i = 0; i < s.length(); i++)
    {
        int a = s[i] - '0';
        if(a>max){
            max = a;
        }
    }
    cout << max << endl;
    return 0;
}