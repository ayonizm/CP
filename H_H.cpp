#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
string hello(string s){
    int sum = 0;
    if(s.length()==1){
        return s;
    }
    for (int i = 0; i < s.length(); i++)
    {
        sum += (s[i] - '0');
    }
    string k = to_string(sum);
    return hello(k);
    
}
int main(){
    op();
    while (1)
    {
        string s;
        cin >> s;
        if(s[0]=='0'){
            break;
        }
        cout << hello(s) << endl;
    }
    
    

    return 0;
}