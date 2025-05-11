#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int nod(int x){
    int count = 0;
    for (int i = 1; i <=x; i++)
    {
        if(x%i==0){
            count++;
        }
    }
    return count;
}
int main(){
    op();
    int n;
    cin >> n;
    cout << nod(n);
    return 0;
}