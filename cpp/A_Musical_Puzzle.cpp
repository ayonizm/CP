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
        int a;
        cin >> a;
        string s;
        cin >> s;
        if(s.length()<=2){
            cout << "0" << endl;
            continue;
        }
        vector<string> x1;
        set<string> x2;
        for (int i = 0; i < s.length() - 1; i++)
        {
            for (int j = 1; j < s.length(); j++)
            {
                string o = s.substr(i, j);
                x1.push_back(o);
            }
        }
        for (auto v : x1)
        {
            if (v.length() == 2)
            {
                x2.insert(v);
            }
        }
        cout << x2.size() << endl;
    }

    return 0;
}