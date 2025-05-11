#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string x;
    cin >> x;
    string temp = x;
    reverse(temp.begin(), temp.end());
    if(x==temp){
        cout << "YES" << endl;
    }
    else{

        cout << "NO" << endl;
    }

    return 0;
}