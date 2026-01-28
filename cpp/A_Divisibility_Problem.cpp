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
        long long int a, b;
        cin >> a >> b;
        if(a<b){
            cout << b - a << endl;
        }
        else if(a%b==0){
            cout << "0" << endl;
        }
        else{
            int k = (a / b + 1);
            cout << b*k - a << endl;
        }
        
    }
    
    return 0;
}