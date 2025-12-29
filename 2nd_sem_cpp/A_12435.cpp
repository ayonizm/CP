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
    int n = 5;
    vector<int>x;
    while (n--)
    {
        int k;
        cin >> k;
        x.push_back(k);
    }
    n = 5;
    int p = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(x[i]>x[j]){
                p++;
            }
        }
        
    }
    if(p==1){
        Yes;
    }
    else{
        No;
    }
    
    

    return 0;
}