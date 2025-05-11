#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vector<int> a(n);

        int e1 = 0, e2 = 0, o1 = 0, o2 = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(i % 2 == 0) {
                if(a[i] % 2 == 1) {
                    o1 = 1;
                }
                else {
                    e1 = 1; 
                }
            } else {
                if(a[i] % 2 == 1){
                 o2 = 1;
                }    
                else {
                    e2 = 1;
                }
            }
        }

        if(e1 && o1) {
            cout << "NO\n";
        } 
        else if(e2 && o2) {
            cout << "NO\n";
        }
         else {
            cout << "YES\n";
        }
    }
    return 0;
}