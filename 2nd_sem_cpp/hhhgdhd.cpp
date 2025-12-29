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
void solve(){
   
}
int main(){
    op();
    ll n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        
        getline(cin, s);
        vector<string> x;
        string k = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                k += s[i];
            }
            else
            {
                x.push_back(k);
                k.clear();
            }
        }
        x.push_back(k);
        k.clear();
        for (int i = 0; i < x.size(); i++)
        {
            cout << x[i] << " ";
        }
        
    }
    

    return 0;
}