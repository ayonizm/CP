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
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string l, w, r = "";
        getline(cin, l);
        stringstream s(l);
        while (s >> w)
        {
            bool a = true;
            for (char c : w)
            {
                if (!isupper(c))
                {
                    a = false;
                    break;
                }
            }
            if (a)
            {
                r += w;
            }
            else
            {
                w[0] = toupper(w[0]);
                for (size_t i = 1; i < w.size(); i++)
                {
                    w[i] = tolower(w[i]);
                }
                r += w;
            }
            r += " ";
        }
        r.pop_back();
        cout << r << endl;
    
    }
    

    return 0;
}