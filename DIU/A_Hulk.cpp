#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    for (int i = 0; i < n-1; i++)
    {
        if(i%2==0){
            cout << "I hate that ";
        }
        else{
            cout << "I love that ";
        }
    }
    if(n%2==0){
        cout << "I love it";
    }else{

        cout << "I hate it";
    }
    return 0;
}