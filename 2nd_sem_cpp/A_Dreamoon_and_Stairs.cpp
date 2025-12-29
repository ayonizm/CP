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
    ll n, m;
    cin>>n>>m;
    string s="";
    if(n%2==0){
        while (n!=0)
        {
            n -= 2;
            s += '2';
        }
    }
    else{
       while (n!=0)
       {
           if(n==1){
               s += '1';
               break;
           }
           n -= 2;
           s += '2';

       }
       
    }
    int flag = 0;
    if(s.length()%m==0){
        cout << s.length() << endl;
        return 0;
    }
    
    while (s[0]=='2')
    {
        s.erase(s.begin());
        s += '1';
        s += '1';
        if(s.length()%m==0){
            cout << s.length() << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
   
    return 0;
}