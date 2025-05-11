#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string f = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        bool found = false;
        for (size_t i = 0; i <= f.length() - s.length(); i++)
        {
            if (f.substr(i, s.length()) == s)
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}