#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    long long int t=1;
    long long int i = 0;
    long long int count = 1;
    while (t<n)
    {
        t = t + 2 + i;
        i++;
        count++;
    }
    cout << count;

    return 0;
}