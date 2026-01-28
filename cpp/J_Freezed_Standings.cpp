#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
    op();
    long long int a, b;
    cin >> a >> b;
    long long int to = a * b;
    long long int f = (to*(to+1))/2;
    long long int w = (a*(a+1))/2;
    cout << f-w<< endl;
    return 0;
}
