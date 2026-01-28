#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    long long int count = 0;
    for (long long int i = 1; i <=n; i++)
    {
        long long int a = n % i;
        long long int b = n / i;
        if(a==b){
            count++;
        }
    }
    cout << count;

    return 0;
}