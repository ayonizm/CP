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
    int b;
    cin >> b;
    string s = to_string(b);
    int l = s.size();
    for (int i = l - 3; i > 0; i -= 3)
    {
        s.insert(i, ",");
    }
    cout << s << endl;

    return 0;
}