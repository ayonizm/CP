#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s="1";
    for (int i = 2; i <=10000; i++)
    {
        string l = to_string(i);
        s = s + l;
    }
    int n;
    cin >> n;
    cout << s[n - 1];
    return 0;
}