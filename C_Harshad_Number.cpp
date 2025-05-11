#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    long long int l = n;
    long long int sum = 0;
    while (l>0)
    {
        long long int temp = l % 10;
        l = l / 10;
        sum = sum + temp;
    }
    
    if(n%sum==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}