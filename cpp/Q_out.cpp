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
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        stack<char> p;
        bool valid = true;
        for (char ch : s)
        {
            if (ch == '(' || ch == '[')
            {
                p.push(ch); 
            }
            else if (ch == ')' || ch == ']')
            {
                if (p.empty())
                {
                    valid = false; 
                    break;
                }
                char top = p.top();
                p.pop();
                if ((ch == ')' && top != '(') || (ch == ']' && top != '['))
                {
                    valid = false;
                    break;
                }
            }
        }
        if (valid && p.empty())
        {
            Yes;
        }
        else
        {
            No;
        }
    }

    return 0;
}