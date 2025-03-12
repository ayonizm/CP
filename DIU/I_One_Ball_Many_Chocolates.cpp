#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int maxScore = 0;

    for (int i = 1; i <= k; ++i) {
        for (int j = i; j <= n; ++j) {
            int score = 0;
            int pos = i, pow = j;

            while (pow > 0 && pos <= n) {
                score += pos;
                pos += pow;
                pow--;
            }

            maxScore = max(maxScore, score);
        }
    }

    cout << maxScore << endl;
    return 0;
}
