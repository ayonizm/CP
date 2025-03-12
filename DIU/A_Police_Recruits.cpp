#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int ar[n];
    int count=0;
    int l=0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        count = count + ar[i];
        if(count<0){
            l++;
            count = 0;
        }
    }
    cout << l;

    return 0;
}