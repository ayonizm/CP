#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
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
        string t;
        cin >> t;
        map<char, int> po;
        ll oi=0;
        for (int i = 0; i < s.length(); i++)
        {
            po[s[i]]++;
            po[t[i]]++;
        }
        for(auto v:po){
            if(v.second%2==1){
                oi++;
            }
        }
        cout << oi << endl;
    }

    return 0;
}