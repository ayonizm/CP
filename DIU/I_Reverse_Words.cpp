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
    getline(cin, s);
    vector<string> x;
    string p = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            p += s[i];
        }
        else{
            x.push_back(p);
            p.clear();
        }
    }
    x.push_back(p);
    for(auto v:x){
        reverse(v.begin(), v.end());
        cout<<v<<" ";
    }

    return 0;
}