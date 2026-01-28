#include <bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

int main() {
    op();
    string s;
    cin >> s;
    string k = s;

    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            s.erase(s.begin() + i);
            i--;
        } else {
            break;
        }
    }

    string l = k;
    reverse(l.begin(), l.end());

    cout << s << endl;
    if (k == l) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
