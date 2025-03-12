#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int m;
    cin >> m;
    int k = 1;
    while (n--)
    {
        int a = k;
        int b = k;
        a = a * 2;
        b = b + m;
        k =min(a, b);
    }
    cout << k << endl;
    return 0;
}