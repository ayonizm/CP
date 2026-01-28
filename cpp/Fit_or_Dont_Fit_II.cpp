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
    ll n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        string p;
        cin >> p;
        ll f = 1;
        ll j = s.length() - 1;
        for (int i = p.length()-1; i>=0; i--)
        {
            if(p[i]!=s[j--]){
                f = 0;
            }
        }
        if(f){
            cout << "encaixa" << endl;
        }
        else{
            cout << "nao encaixa" << endl;
        }
    }

    return 0;
}