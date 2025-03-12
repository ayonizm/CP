#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int v=x[0];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if(x[i]==v){
            continue;
        }
        else{
            count++;
            v = x[i];
        }
    }
    cout << count;

    return 0;
}