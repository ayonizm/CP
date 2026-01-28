#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
    int ar[4];
    cin >> ar[0];
    int count = 0;
    for (int j = 1; j < 4; j++)
    {
        cin >> ar[j];
        if(ar[j]>ar[0]){
            count++;
        }

    }

    cout << count << endl;
    }
    
    return 0;
}