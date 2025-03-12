#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
long long int po(long long int a){
    long long int b = 8;
    for (int i = 0; i < a-1; i++)
    {
        b = b * b;
    }
    return b;
}
int main(){
    op();
    long long int n;
    cin >> n;
    long long int rem = n % 4;
    if(rem==0){
        rem = 4;
    }
    string k = to_string(po(rem));
    cout << k[k.length() - 1];

    return 0;
}