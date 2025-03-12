#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b;
    cin >> a >> b;
    if(a<3||a>=70){
        cout << "Free" << endl;
    }
    else if(a>=3&&a<=12){
        cout << "10" << endl;
    }
    else if(a>=13&&a<=64){
        if(a>=30&&a<=40&&b>75){
            cout << "18" << endl;
        }
        else{
            cout << "20" << endl;
        }
    }
    else if(a>=65&&a<=69){
        cout << "15" << endl;
    }
    return 0;
}