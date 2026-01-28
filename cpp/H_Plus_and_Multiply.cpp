#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (a == 1) {
            if ((n - 1) % b == 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        } else {
            int t = 1;
            bool flag = false;
            while (t <= n) {
                if (t % b == n % b) {
                    flag = true;
                    break;
                }
                t *= a;
            }
            if (flag) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}