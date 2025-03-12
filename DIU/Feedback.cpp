#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    map<int, string> x;
    x[1] = "Rolien";
    x[2] = "Naej";
    x[3] = "Elehcim";
    x[4] = "Odranoel";
    int n;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        while (k--)
        {
            int temp;
            cin >> temp;
            cout<<x[temp]<<endl;
        }
        
    }
    
    return 0;
}