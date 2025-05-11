#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        long long int a, b;
        cin >> a >> b;
        vector<long long int> x;
        for (int i = 0; i <b ; i++)
        {
            long long int temp;
            cin >> temp;
            x.push_back(temp);
        }
        long long int j = x[0];
        for (long long int i = 1; i <b; i++)
        {
           j = (j * x[i]) / __gcd(j, x[i]);
        }
        cout << a / j<<endl;
    }
    return 0;
}