#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int a;
    cin >> a;
    if(a>=1&&a<=3){
        cout << "Initial" << endl;
    }
    else if(a>=4&&a<=6){
        cout << "Average" << endl;
    }
    else if(a>=7&&a<=9){
        cout << "Sufficient" << endl;
    }
    else{
        cout << "High" << endl;
    }
    return 0;
}