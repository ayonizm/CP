#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
void solve(){
    int n;
    cin >> n;
    char ar[n][n];
    int pos1_1 = 0;
    int pos1_2 = 0;
    int pos2_1 = 0;
    int pos2_2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ar[i][j];
            if(ar[i][j]=='*'&&pos1_1==0&&pos1_2==0){
                pos1_1 = i;
                pos1_2 = j;
            }
            else{
                pos2_1 = i;
                pos2_2 = j;
            }
        }
        
    }
    int l1 = abs(pos1_1 - pos2_1);
    if(pos1_1<pos2_1){
        
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