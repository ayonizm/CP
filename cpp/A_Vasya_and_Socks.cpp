#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b, k;
    int po;
    cin >> a >> b;
    int sum = a;
    while(a>=b)
    {
        k = (a/b);
        sum = sum + k;
        po = (a%b);
        a= (k+po);
    }
    cout << sum << endl;
    return 0;
}