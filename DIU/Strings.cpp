#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string s;
    cin >> s;
    string t;
    cin >> t;
    cout << s.length() << " "<<t.length() << endl;
    cout << s << t << endl;
    char l;
    l = s[0];
    s[0] = t[0];
    t[0] = l;
    cout << s << " " << t << endl;
    return 0;
}