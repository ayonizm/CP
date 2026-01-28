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
    vector<int> p;
    ll ct = 0;
    p.push_back(0);
    for (ll i = 0; i < s.length(); i++)
    {
        if(s[i]=='a'){
            ct++;
        }
        p.push_back(ct);
    }
    
    ll n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cout << p[b]-p[a-1] << endl;
    }
    
    

    return 0;
}