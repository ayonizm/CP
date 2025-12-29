#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
int main()
{
    op();
    int n;
    cin >> n;
    while (n--)
    {
        int c;
        cin >> c;
        string s;
        cin >> s;
        set<char> x;
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
            
            x.insert(s[i]);
        }
        if(x.size()==4){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        

    }

    return 0;
}