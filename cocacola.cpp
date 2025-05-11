#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n;
    cin >> n;
    int sum = n;
    while (1)
    {
        int a = n % 3;
        int k = n / 3;

        n = a + k;
        if(n==0){
            break;
        }
        if(k==0){
            sum -= a;
            break;
        }
        sum += n;
    }
    cout << sum<<endl;
    return 0;
}