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
        ll a, b;
        cin >> a >> b;
        vector<int> x;
        for (int i = 0; i < a; i++)
        {
            int t;
            cin >> t;
            x.push_back(t);
        }
        int pos = -1;
        for (int i = 0; i < a; i++)
        {
            int flg = 1;
            for (int j = 0; j < a; j++)
            {
                if(i==j){
                    continue;
                }
                if(abs(x[i]-x[j])%b==0){
                    flg = 0;
                    break;
                }
                
            }
            if(flg==1){
                pos = i + 1;
                break;
            }
            
        }
        if(pos==-1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES\n"<< pos << endl;
        }
        
        
    }
    
    return 0;
}