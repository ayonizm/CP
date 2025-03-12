#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
void oivai(int a){
    if(a>=0&&a<=24){
        cout << "level 0" << endl;
    }
    else if(a>=25&&a<=49){
        cout << "level 1" << endl;
    }
    else if(a>=50&&a<=74){

        cout << "level 2" << endl;
    }
    else if(a>=75&&a<=99){
        cout << "level 3" << endl;
    }
}
int main(){
    op();
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    long long int a1 = a % 100;
    long long int b1 = b % 100;
    long long int ab1 = (a*b) % 100;
    long long int c1 = c % 100;
    long long int d1 = d % 100;
    long long int cd1 = (c*d) % 100;
    
    long long int m1 = (ab1*cd1) % 100;
    
    oivai(m1);
    return 0;
}