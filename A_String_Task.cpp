#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    
    string s=to_string(n);
    int r=0;
    for (int i = 0; i < s.length(); i++)
    {
        r += s[i]-'0';
        
    }
    string k = to_string(r);
    string u = k;
    reverse(u.begin(), u.end());
    if(u==k)
        return true;
        else
            return false;

    return 0;
}