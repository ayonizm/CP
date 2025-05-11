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
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == "sick" && s2 == "sick")
    {
        cout << 1;
    }
    else if (s1 == "sick" && s2 == "fine")
    {
        cout << 2;
    }
    else if (s1 == "fine" && s2 == "sick")
    {
        cout << 3;
    }
    else if (s1 == "fine" && s2 == "fine")
    {
        cout << 4;
    }

    return 0;
}
