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
    int ar[2][2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> ar[i][j];
            }
            
        }
        if(ar[0][0]==1&&ar[1][1]==1&&ar[0][1]==1&&ar[1][0]==1){
            cout << "2" << endl;
            
        }
        else if(ar[0][0]==0&&ar[1][1]==0&&ar[0][1]==0&&ar[1][0]==0){
            cout << "0" << endl;
            
        }
        else{
            cout << "1" << endl;
        }
    }
    return 0;
}