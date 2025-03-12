#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout << "prime" << endl;
    }
    else{
        cout << "not prime" << endl;
    }
    return 0;
}