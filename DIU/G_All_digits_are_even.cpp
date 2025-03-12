#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string s;
    cin >> s;
    int t = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int k = s[i] - '0';
        if(k%2==0){
            t++;
        }
    }
    if(t==s.length()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}