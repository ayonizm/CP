#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a<b&&b<c){
            cout << "STAIR" << endl;
        }
        else if(a<b&&b>c){
            cout << "PEAK" << endl;
        }
        else{
            cout << "NONE" << endl;
        }
        
    }
    
    return 0;
}