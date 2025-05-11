#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    if(n-6>1){
        cout << "Papua New Guinea Wins!" << endl;
    }
    else if((n-6)==1){
        cout << "Super Over Decides!" << endl;
    }
    else{
        cout << "Uganda Wins!" << endl;
    }
    return 0;
}