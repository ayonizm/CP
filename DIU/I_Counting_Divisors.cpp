#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
const int MAX = 1e6 + 9;
int ar[MAX];
void precom_number_of_divisor(){
    for (int i = 1; i <=MAX; i++)
    {
        for (int j = i; j <=MAX; j+=i)
        {
            ar[j]++;
        }
        
    }
    
}
int main(){
    op();
    precom_number_of_divisor();
    int n;
    cin >> n;
    while (n--)
    {
        ll k;
        cin >> k;
        cout << ar[k] << endl;
    }
    
    return 0;
}