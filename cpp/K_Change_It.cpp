#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
     int t;  
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> mir;
        int m = 0;
        for (int i = 0; i < n; i++) {
            mir[a[i]]++;
            m = max(m, mir[a[i]]);
        }
        cout << n - m << endl;
    }
    return 0;
}