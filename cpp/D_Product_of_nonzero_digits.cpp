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
    ll k = 1;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!='0'){
            k *= (s[i] - '0');
        }
    }
    cout << k << endl;

    return 0;
}