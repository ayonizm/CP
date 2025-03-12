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
    ll m = 0;
    if (s.length() == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    char tp = s[0];
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == tp)
        {
            c++;
        }
        else
        {
            tp = s[i];
            if (c > m)
            {
                m = c;
            }
            c = 1;
        }
    }
    if (c > m)
    {
        m = c;
    }
    cout << m << endl;

    return 0;
}