#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int a = min(s1.length(), s2.length());
    for (int i = 0; i < a; i++)
    {
        cout << s1[i] << s2[i];
       
    }
    for (int i = a; i < s1.length(); i++)
    {
        cout << s1[i];
    }
    for (int i = a; i < s2.length(); i++)
    {
        cout << s2[i];
    }
    

    return 0;
}