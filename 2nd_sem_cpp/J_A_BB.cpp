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
    string s;
    cin >> s;
    if(s.length()==1){
        cout << s << endl;
        return 0;
    }
    int count = 0;
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]=='B'&&s[i+1]=='A'){
            swap(s[i], s[i + 1]);
        }
        else if (s[i] == 'B' && s[i + 1] == 'B')
        {
            s[i] = 'A';
            s[i + 1] = '*';
        }
    }
    for(auto v:s){
        if(v!='*'){
            cout << v;
        }
    }

    return 0;
}