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
    int b = 0;
    bool c;
    if(s[0]=='1'){
        c = true;
    }
    else{
        c = false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4')
        {
            b++;
        }
        else if (s[i] == '1')
        {
            b = 0;
        }
        else
        {
            c = false;
        }
        if (b > 2)
        {
            c = false;
        }
    }
  if(c){
      cout << "YES" << endl;
  }
  else{
      cout << "NO" << endl;
  }

    return 0;
}