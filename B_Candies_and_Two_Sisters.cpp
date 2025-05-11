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
        ;
    long long int t;
        cin >> t;
        if (t % 2 == 0){
            t = (t / 2) - 1;
        }
        else{
            t = t / 2;
        }
        cout << t << endl;
    }
    
    return 0;
}