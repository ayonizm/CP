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
        int a, b;
        cin >> a >> b;
        int l1 = a / b;
        int k = l1 / 2;
        cout << l1 + k << endl;
        
    }
    

    return 0;
}