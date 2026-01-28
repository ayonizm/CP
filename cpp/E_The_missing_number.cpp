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
    int n = 100;
    set<int> p;
    while (n--)
    {
        int k;
        cin >> k;
        p.insert(k);
    }
    int oi = 1;
    for(auto v:p){
      if(v!=oi){
          cout << oi << endl;
          return 0;
      }
      oi++;
    }
   
    

    return 0;
}