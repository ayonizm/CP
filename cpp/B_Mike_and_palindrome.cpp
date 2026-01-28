#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
int main()
{
    op();
    string s;
    cin >> s;
    string k = s;
    int ct = 0;
    if(s.length()%2!=0){
        char p = s[(s.length() / 2) + 1];
    }
    reverse(k.begin(), k.end());
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!=k[i]){
            ct++;
        }
        
    }
    if(ct==2){
        cout << "YES" << endl;
    }
    else if(ct==0&&s.length()%2!=0){
        cout << "YES" << endl;
    }   
    else {
        cout << "NO" << endl;
    }
    return 0;
}