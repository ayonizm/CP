#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int min;
    cin >> min;
    int sum = 0;
    int a = 240 - min;
    int count = 0;
    for (int i = 1; i<=n; i++)
    {
        int x = 5 * i;
        a = a - x;
        if(a>=0){
            count++;
        }
    }
   
    
    cout << count;
    return 0;
}