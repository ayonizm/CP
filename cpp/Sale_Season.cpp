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

    while (n--)
    {
        int k;
        cin >> k;

       
        if (k <= 100)
        {
            cout << k << endl; 
        }
        else if (k <= 1000)
        {
            cout << k - 25 << endl; 
        }
        else if (k <= 5000)
        {
            cout << k - 100 << endl; 
        }
        else
        {
            cout << k - 500 << endl;
        }
    }
    return 0;
}