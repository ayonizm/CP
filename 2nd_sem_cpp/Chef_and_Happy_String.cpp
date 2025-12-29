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
bool vl(char p){
    if(p=='a'||p=='e'||p=='i'||p=='o'||p=='u'){
        return true;
    }
    else{
        return false;
    }
}
void solve(){
    string s;
    cin >> s;

    for (int i = 0; i < s.length() - 2; i++)
    {
        if (vl(s[i]) && vl(s[i + 1]) && vl(s[i + 2]))
        {
            cout << "Happy" << endl;
            return;
        }
    }
    cout << "Sad" << endl;
}
int main(){
    op();
    int n;
    cin >> n;
    
    while (n--)
    {
        solve();
    }
    

    return 0;
}