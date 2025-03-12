#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int i = 1;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int gc = __gcd(a, b);
        int lcm = (a * b) / gc;
        cout <<"Case "<<i<<": "<< lcm << endl;
        i++;
    }
    
    return 0;
}