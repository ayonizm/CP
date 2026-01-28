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
    string p;
    cin >> p;
    int a = s.length() - 1;
    int b = p.length() - 1;
    while (1)
    {
        if(!isdigit(s[a])||!isdigit(p[b])){
            break;
        }
        int r = s[a] - '0';
        int k = p[b] - '0';
        int y = r + k;
        if(y>9){
            cout << "Yes" << endl;
            return 0;
        }
        a--;
        b--;
    }
    cout << "No" << endl;

    return 0;
}