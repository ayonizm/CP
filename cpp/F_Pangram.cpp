#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n<26){
        cout << "NO" << endl;
        return 0;
    }
    set<char>x;

    for (int i = 0; i <s.length() ; i++)
    {
        s[i] = tolower(s[i]);
        x.insert(s[i]);
    }
    if(x.size()==26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}