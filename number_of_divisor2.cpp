#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int nod(int n){
    int div = 1;
    for (int i = 2; i * i<=n ; i++)
    {
        int power = 0;
        while (n%i==0)
        {
            power++;
            n = n / i;
        }
        div = div * (power + 1);
    }
    if(n>2){
        div = div * (1 + 1);
    }
    return div;
}
int main(){
    op();
    int n;
    cin >> n;
    cout << nod(n);
    return 0;
}