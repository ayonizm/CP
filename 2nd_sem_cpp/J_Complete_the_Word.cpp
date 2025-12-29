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
    int ct = 0;
    if (s.length() < 26)
    {
        cout << -1 << endl;
        return 0;
    }

    map<char, int> u;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '?')
        {
            ct++;
        }
        else
        {
            u[s[i]]++;
        }
    }

    vector<char> l;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        if (u[i] == 0)
        {
            l.push_back(i);
        }
    }

 
    if (l.size() > ct)
    {
        cout << -1 << endl;
        return 0;
    }

    int j = l.size() - 1;
    for (int i = s.length() - 1; i >= 0; i--)
    { 
        if (s[i] == '?')
        {
            if (j >= 0)
            {
                s[i] = l[j];
                j--;
            }
            else
            {
                s[i] = 'A'; 
            }
        }
    }

    map<char, int> ayon;
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            ayon[s[i]]++;
        }
    }
    cout << ayon.size();
    if (ayon.size() == 26)
    {
        cout << s << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}