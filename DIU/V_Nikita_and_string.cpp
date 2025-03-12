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
    int a = 0, ay = 0, at = 0, m;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            a++;
            at++;
        }
        else
        {
            ay++;
        }
        at = max(ay, at);
        ay = max(a, ay);
    }
    cout << max(a, max(at, ay));
    return 0;
}