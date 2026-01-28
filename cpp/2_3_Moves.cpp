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
        if(k==1){
            cout << 2 << endl;
            continue;
        }
        int p = 0;
        if(k%3==0){
            cout << k / 3<<endl;
        }
        else{
            p++;
            p = p + (k / 3);
            cout << p << endl;
        }
    }
    

    return 0;
}           