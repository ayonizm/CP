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
    char grid[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if(grid[i][j]=='#'){
                for (int k = 0; k < 8; k++)
                {
                  if(grid[k][j]!='#'){

                      grid[k][j] = '0';
                  }
                }
                for (int k = 0; k < 8; k++)
                {
                  if(grid[i][k]!='#'){
                      grid[i][k] = '0';
                  }
                }
                
            }
        }
        
    }
    int ct = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if(grid[i][j]=='.'){
                // cout << grid[i][j];
                ct++;
            }
        }
        // cout << endl;
    }
    cout << ct << endl;

    return 0;
}