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
    int n;
    cin >> n;
    int carl = 0;
    int chef = 0;
    int dr = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='C'){
            carl+=2;
        }
        else if(s[i]=='D'){
            carl++;
            chef++;
        }
        else{
            chef+=2;
        }
    }
    int p;
    if(carl>chef){
        p = n * 60;
    }
    else if(carl<chef){
        p = n * 40;
    }
    else{
        p = 55 * n;
    }
    cout << p << endl;
}
int main(){
    op();
    int n;
    cin >> n;
    while(n--){
        solve();
    }

    return 0;
}