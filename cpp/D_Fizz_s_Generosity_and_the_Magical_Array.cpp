#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    while (n--)
    {
        long long int te;
        cin >> te;
        if(te==0){
            cout << "YES" << endl;
            return 0;
        }
        else if(te==1){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}