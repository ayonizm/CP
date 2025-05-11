#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    if(n>=30&&n<=100){
        cout << "3" << endl;
    }
    else if(n>=15&&n<30){
        cout << "2" << endl;
    }
    else if(n>=5&&n<15){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
    return 0;
}