#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
long long int divsum(int n){
    map<int, int> x;
    for (int i = 2; i *i<=n ; i++)
    {
        int power = 0;
        while (n%i==0)
        {
            power++;
            n = n / i;
        }
        if(power>0){
            x[i] = power;
        }
    }
    long long int formula = 1;
    x[n]++;
    for(auto v:x){
        int x = v.first;
        int y = v.second;
        formula = formula * ((pow(x, y + 1) -1) / (x - 1));
    }
    return formula;
}

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
    cout << divsum(n);
    return 0;
}