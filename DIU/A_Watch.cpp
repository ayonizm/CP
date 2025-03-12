#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    long long int h=0;
    long long int m=0;
    long long int s=0;
    cin >> n;
    h = n / 3600;
    long long int temp1 = n % 3600;
    m = temp1 / 60;
    long long int temp2;
    temp2 = temp1 % 60;
    cout << h << ":" << m << ":" << temp2 << endl;
    return 0;
}