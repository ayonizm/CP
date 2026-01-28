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
    int n;
    cin >> n;
    int l = 0;
    int ul = 0;

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        if(p%2==0){
            l++;
        }
        else{
            ul++;
        }
    }
    if(l>ul){
        cout << "READY FOR BATTLE" << endl;
    }
    else{

        cout << "NOT READY" << endl;
    }

    

    return 0;
}