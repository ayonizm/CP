#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll s1, s2;
    cin >> s1 >> s2;
    if(s1>0&&s2>0||s1<0&&s2<0){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
    return 0;
}