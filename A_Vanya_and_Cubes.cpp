#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int count = 1;
    int k = 0;
    int sum = 0;
    for (int i = 1;; i=(i+1+k))
    {
        sum = sum + i;
        if(sum>n){
            break;
        }
        count++;
        k++;
    }
    cout << count-1;
    return 0;
}