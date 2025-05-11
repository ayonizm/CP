#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        string k;
        cin >> k;
        for (int i = 0; i < k.length(); i++)
        {
            if(k[i]=='p'){
                k[i] = 'q';
            }
            else if(k[i]=='q'){
                k[i] = 'p';
            }
        }
        reverse(k.begin(), k.end());
        cout << k << endl;
    }
    
    return 0;
}