#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int num1, num2;
    cin >> num1 >> num2;
    int n1 = num1;
    int n2 = num2;
    while (n2!=0)
    {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    cout << n1;
    return 0;
}