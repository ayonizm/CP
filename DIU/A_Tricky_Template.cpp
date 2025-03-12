#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
 
        int w = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] != c[i] && b[i] != c[i]) {
                w = 1;
                break;
            }
        }
        if (w) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}