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
    int ar[n];
    int k = 0;
    for (int i = 0; i < x.size(); i++)
    {
        cin >> ar[i];
        ar[i] = ar[i] - (ar[i] % 3);
        k += ar[i];
    }
    cout << k << endl;

    
    return 0;
}