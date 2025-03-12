#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    while (n--)
    {
        long long int x, y;
        cin >> x >> y;
        // int total1 = x / 2 + x % 2;
        // int total2 =y % 2;
        // cout << total1<<endl;
        // cout << total2<<endl;
        // if(y==1){
        //     cout << "YES" << endl;
        //     continue;
        // }
        long long int l = y * y;
        long long int a = x%2;
        long long int b = y%2;
        if(a==b&&l<=x){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}