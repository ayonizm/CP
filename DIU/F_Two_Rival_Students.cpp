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
        int til, move, a, b;
    cin >> til >> move >> a >> b;
    int count = 0;
    int mx = max(a, b);
    int mn = min(a, b);
    if(mx==til&&mn==1){
        cout << abs(mx - mn) << endl;
        continue;
    }
    for (int i = 0; i < move; i++)
    {
       
        if(mx==til){
            break;
        }
    }
    int f = move - count;
    for (int i = 0; i < f; i++)
    {
        mn--;
        if(mn==1){
            break;
        }
    }
    
    
    
    
    }
    
    return 0;
}