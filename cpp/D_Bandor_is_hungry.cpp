#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int x, n;
    cin >> x >> n;
    if(x>2000){
        cout << "Bandor, these bananas are tasty enough." << endl;
    }
    else if(x<=2000&&x>0&&n>100){
        cout << "Bandor, these bananas are tasty enough." << endl;
    }
    else{
        cout << "No Bandor, bananas are not tasty enough." << endl;
        
    }
    return 0;
}