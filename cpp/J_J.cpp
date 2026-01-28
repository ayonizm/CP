#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
int hello(int a,int b){
    if(a==b){
        return 1;
    }
    else if(a<b){
        return 1;
    }
    if(a%2!=0){

        return hello(a / 2, b) + hello((a / 2)+1, b);
    }
    else{
        return hello(a / 2, b) + hello((a / 2), b);
        
    }
}
int main(){
    op();
    int a, b;
    while (cin >> a >> b){
        cout << hello(a, b)<<endl;
    }
    return 0;
}