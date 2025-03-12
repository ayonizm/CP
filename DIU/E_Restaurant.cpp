#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    int f = n * 800;
    long long int a = n / 15;
    long long int c = a * 200;
    cout << f - c;
    return 0;
}