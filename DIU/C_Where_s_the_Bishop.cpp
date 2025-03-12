#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    char ar[8][8];
    while (n--)
    {
    
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> ar[i][j];
        }
    }
    int pos1;
    int pos2;
    int flag = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if(ar[i][j]=='#'&&ar[i][j+1]=='.'&&ar[i][j+2]=='#'){
                pos1 = i + 1;
                pos2 = j + 1;
                cout << pos1+1 << " " << pos2+1 << endl;
                flag = 1;
                break;
            }
        }
        if(flag){
            break;
        }
    }
        
    }

    
    return 0;
}