#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    long long int count = 0;
    while (n>0)
    {
    long long int l = n;
    int sum = 0;
    while (l>0)
    {
        long long int rem = l % 10;
        l = l / 10;
        sum = sum + rem;
    }
    n = n - sum;
    count++;
    }
    cout << count;
    return 0;
}