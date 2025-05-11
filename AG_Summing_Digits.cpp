#include <bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
    op();
    while (1) {
        string s;
        cin >> s;
        if (s == "0") {
            break;
        }
        while (s.length() > 1) { 
            int sum = 0;
            for (int i = 0; i < s.length(); i++) {
                sum += (s[i] - '0'); 
            }
            s = to_string(sum); 
        }

        cout << s << endl; 
    }

    return 0;
}
