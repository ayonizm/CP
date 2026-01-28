#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int num;
    int n;
    cin >> num >> n;
    while (n--)
    {
        if(num%10==0){
            num = num / 10;
        }
        else{
            num--;
        }
    }
    cout << num;
    return 0;
}