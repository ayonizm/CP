#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long n;
    cin >> n;
    cout << (n - 1) * n * (n + 1) / 6 + n << endl;
    return 0;
}