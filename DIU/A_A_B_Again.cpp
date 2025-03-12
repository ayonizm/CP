#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int l = s[0]-'0';
        int m = s[1]-'0';
        int o = l + m;
        cout << o << endl;
    }
    
    return 0;
}