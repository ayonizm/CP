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
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int scoreA = 0, scoreB = 0;
    char server = 'A';

    for (char c : s)
    {
        if (c == server)
        {
            if (server == 'A')
                scoreA++;
            else
                scoreB++;
        }
        else
        {
            server = c;
        }
    }
    cout << scoreA << " " << scoreB << "\n";
}
int main(){
    op();
    ll k;
    cin >> k;
    while (k--)
    {
        solve();
    }
    

    return 0;
}