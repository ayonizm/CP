#include <bits/stdc++.h>

using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
    op();
    int n, r;
    cin >> n >> r;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { 
            for (int j = 0; j < r; j++) {
                cout << "#";
            }
        } else { 
            if (i % 4 == 1) {
                for (int j = 0; j < r - 1; j++) {
                    cout << ".";
                }

                cout << "#";
            }
             else {
                cout << "#"; 
                for (int j = 1; j < r; j++)
                 {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
