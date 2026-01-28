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
    map<char, int> x;
    for (int i = 0; i < s.length(); i++)
    {
        x[s[i]]++;
    }
    string l = "ABC";
    int ct = 0;
    for (int i = 0; i < l.length(); i++)
    {
        if(x[l[i]]!=0){
            ct++;
        }
    }
    if(ct==3){
        Yes;
    }
    else{
        No;
    }
    

    return 0;
}