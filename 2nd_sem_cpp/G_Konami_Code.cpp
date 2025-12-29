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
    string f = "UUDDLRLRBA";
    string k;
    cin >> k;
    int res = k.find(f);
    int ct = 0;
    while (res!=string::npos)
    {
        ct++;
        for (int i = 0; i < res; i++)
        {
            k[i] = '?';
        }
        
        k.erase(k.begin() + res, k.begin() + res + 10);
        
        res = k.find(f);
    }
    cout << ct << endl;

    return 0;
}