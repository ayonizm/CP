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
    vector<char> x;
    for (int i = 0; i < s.length(); i++)
    {
        if(isdigit(s[i])){
            x.push_back(s[i]);
        }
    }
    sort(x.begin(), x.end());
    for (int i = 0; i < x.size()-1; i++)
    {
        cout << x[i] << "+";
    }
    cout << x[x.size() - 1];

    return 0;
}