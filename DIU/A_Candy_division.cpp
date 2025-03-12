#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    while (n--)
    {
        long long int x;
        cin >> x;

        if(x%3==0){
            cout << x / 3 << " " << x / 3 << " " << x / 3 << endl;
            
        }
        else if(x%4==0){
            cout << x / 4 << " " << x / 4 << " " << x / 2 << endl;
        }
        else{
            cout << "IMPOSSIBLE" << endl;
        }
    }
    
    return 0;
}