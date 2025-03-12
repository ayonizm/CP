#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    int a, b;

    while(cin>>n) {

        int x1, x2;
        cin >> x1 >> x2;
        while(n--) {
            cin >> a >> b;
            // cout << a << b;
            if(a == x1 || b == x2)
            {
                cout << "divisa" << endl;

            }
            else if(a > x1 && b > x2){

                cout << "NE" << endl;
            }
            else if(a < x1 && b > x2)
            {
                cout << "NO" << endl;

            }
            else if(a < x1 && b < x2)
            {
                cout << "SO" << endl;

            }
            else{
                cout << "SE" << endl;
            }
        }
    }
   
    return 0;
}