#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        unordered_map<int, int> freq; 
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (freq[a[i]] + 1 > (i + 1) / 2) {
                b[i] = a[i];
            } else {
                
                for (int j = 1; j <= n; ++j) {
                    if (j != a[i] && freq[j] < freq[a[i]]) {
                        b[i] = j;
                        break;
                    }
                }
            }

            freq[b[i]]++;
        }

        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
