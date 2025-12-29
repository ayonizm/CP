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
    int ar[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> ar[i];
    }
    int ct = 0;
    int k = 9;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if(ar[i]==ar[j]){
                ar[j] = k;
                k++;
                ar[i] = k;
                k++;
                ct++;
            }
        }
        
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << ar[i] << " ";
    // }
    
    cout << ct << endl;

    return 0;
}