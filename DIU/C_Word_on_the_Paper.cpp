#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
   while (n--)
   {
       string l;
       char x;
       for (int i = 0; i < 8; i++)
       {
        for (int j = 0; j < 8; j++)
        {
            cin >> x;
            if(x!='.'){
                l += x;
            }
        }
        
       }
       cout << l << endl;
       
       l.clear();
   }
   
    
    return 0;
}