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
    string p = "";
    string l = "";
    for (int i = 0; i < s.length(); i++)
    {
        p += s[i];
        if(p.length()>=2){
            if (p[p.length() - 1] == 'T' && p[p.length()-2]=='S'){
                p.erase(p.end() - 2, p.end() + 0);
            }
        }

   }
   cout << p << endl;

   return 0;
}