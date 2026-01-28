#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s1,s2;
    cin >> s1;
    cin >> s2;
    int a = s1[s1.length() - 1]-'0';
    int b = s2[s2.length() - 1]-'0';
    cout << a+b;

    return 0;
}