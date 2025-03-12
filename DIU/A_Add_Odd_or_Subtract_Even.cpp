#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if(a==b){
            cout << "0" << endl;
            continue;
        }
        if(a>b&&(a-b)%2==0){
            cout << "1" << endl;
            continue;
        }
        if(a<b&&(b-a)%2!=0){
            cout << "1" << endl;
            continue;
        }
        cout << "2" << endl;
    }
    
    return 0;
}