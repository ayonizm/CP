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
    string s;
    cin >> s;
    ll c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='0'&&s[i]<='9'||s[i]=='O'){
            c++;
        }
    }
    int a = c / 6;
    int p = c % 6;
    if(p==0&&a>0){
        if(p==1){
        cout << a << " OVER " << endl;
        }
        else{

        cout << a << " OVERS" << endl;
        }
            
    }
    if(a!=1){
        if(a==1&&p==1){

        cout << a << " OVER " << p << " BALL" << endl;
        }
        else if(a==1&&p!=1){

        cout << a << " OVER " << p << " BALLS" << endl;
        }
        else if(a!=1&&p==1){
        cout << a << " OVERS " << p << " BALL" << endl;

        }
        else{
        cout << a << " OVERS " << p << " BALLS" << endl;

        }
    }
    else{
        if(p!=1){

            cout << p << " BALL" << endl;
        }
        else{

            cout << p << " BALLS" << endl;
        }
    }
}
int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    

    return 0;
}