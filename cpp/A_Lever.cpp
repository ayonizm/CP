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
int main(){
    op();
    string s;
    cin >> s;
    char p = '^';
    int pos = -1;
    ll t = 0;
    for (int i = 0;; i++)
    {
        if(isdigit(s[i])){
            t++;

        }
        if (s[i] != p){
            pos = i+1;
            break;
        }
    }
    for (int i = pos;i<s.length(); i++)
    {
        if(isdigit(s[i])){
            t++;

        }
        
    }
    if(t==2){
        
    }
    

    return 0;
}