#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int count = 0;
    if(ar[0]>ar[n-1]){

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(ar[i]<ar[j]){
                int temp = ar[i];
                ar[i] = ar[n - i - 1];
                ar[n - i - 1] = temp;
                count++;
            }
        }
        
    }
    }
    else{
        for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(ar[i]>ar[j]){
                int temp = ar[i];
                ar[i] = ar[n - i - 1];
                ar[n - i - 1] = temp;
                count++;
            }
        }
        
    }
    }
    cout << count;

    return 0;
}