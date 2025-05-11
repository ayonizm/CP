#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
//sourov vai er temp
int SOD(int n) {
    int sod = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            int pow = 1;
            while (n % i == 0) {
                pow *= i; // p^e
                n /= i;
            }
            pow *= i; // p^e+1
            sod *= (pow - 1) / (i - 1); //(p^e+1)-1 / p-1
        }
    }
    if (n > 1) sod *= (n + 1);
    return sod;
}
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        long long int x;
        cin >> x;
        cout << SOD(x)-x<< endl;
    }
    
    return 0;
}