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
    getline(cin, s);
    set<char> p;
    for (int i = 0; i < s.length(); i++)
    {
        if(isalpha(s[i])){
            p.insert(s[i]);
        }
    }
    cout << p.size() << endl;

    return 0;
}