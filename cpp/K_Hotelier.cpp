#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string k = "0000000000";
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        
        int l = 0;
        int r = 9;
        if(s[i]=='L'){
            k[l] = '1';
            l++;
        }
        else if(s[i]=='R'){
            k[r] = '1';
            r--;
        }
        else{
            int a = s[i] - '0';
            k[a] = '1';
        }
    }
    cout << k;
    return 0;
}