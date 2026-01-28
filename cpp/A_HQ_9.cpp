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
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            YES;
            return 0;
        }
    }
    NO;
    return 0;

}