#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    int m = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int k = s[i] - '0';
        if(k>m){
            m = k;
        }
    }
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]-'0'==m){
            count++;
        }
    }
    cout << count;

    return 0;
}