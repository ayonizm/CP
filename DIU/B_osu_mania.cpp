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
        ll k;
        cin >> k;
        char ar[k][4];
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                    cin >> ar[i][j];
            }
            
        }
        vector<int> x;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if(ar[i][j]=='#'){
                    x.push_back(j+1);
                }
            }
            
        }
        reverse(x.begin(), x.end());
        for(auto v:x){
            cout << v << " ";
        }
        cout << endl;
    }
    
    return 0;
}