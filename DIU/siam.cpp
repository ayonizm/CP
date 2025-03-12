#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    long long int sum = 0;
    for (long long int i = 1; i <=n; i++)
    {
        sum = sum + (n - (n % i));
    }
    cout << sum;
    return 0;
}