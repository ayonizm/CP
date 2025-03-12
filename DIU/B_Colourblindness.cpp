#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        string a, b;
        cin >> a;
        cin >> b;
        int flag = 0;
        
        for (int i = 0; i < x; i++)
        {
            if(a[i]==b[i]){
                continue;
            }
            else if(a[i]=='G'&&b[i]=='B'||a[i]=='B'&&b[i]=='G'){
                continue;
            }
            else{
                flag = 1;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
        
    }
    
    return 0;
}