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
    int n;
    cin >> n;
    string k = "ruby";
    while (n--)
    {
        string s;
        cin >> s;
        map<ll, ll> x;
        for (int i = 0; i < s.length(); i++)
        {
            x[s[i]]++;
        }
        int m = 9999999;
        for(auto v:k){
            int p = x[v];
            m = min(m, p);
        }
        cout << m << endl;
    }
    

    return 0;
}