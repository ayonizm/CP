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
    int ar1[3];
    int ar2[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> ar1[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> ar2[i];
    }
    int p=0, q=0;
    for (int i = 0; i < 3; i++)
    {
        if(ar1[i]>ar2[i]){
            p++;
        }
        else if(ar1[i]<ar2[i]){
            q++;
        }

    }
    cout << p << " " << q << endl;

    return 0;
}