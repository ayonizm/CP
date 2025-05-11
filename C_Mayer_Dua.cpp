#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    if(n==1){
        cout << "HailaYehKyaHua" << endl;
        return 0;
    }
    long long int x = (log(n) / log(2));
    // cout << x;
    if(pow(2,x)==n){
        cout << "Ferocious Angry Fighter" << endl;
    }
    else{
        cout << "HailaYehKyaHua" << endl;
    }

    return 0;
}