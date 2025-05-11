#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while (1)
    {
        int l = n;
        int sum = 0;
        while (l>0)
        {
            int temp = l % 10;
            l = l / 10;
            sum = sum + temp;
        }
        if(sum%4==0){
            cout << n;
            break;
        }
        else{
            n++;
        }
        
    }
    return 0;
}