#include <bits/stdc++.h>
using namespace std;

#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
    op();
    bool reversed = false;
    int n;
    cin >> n;
    string s;
    deque<int> x;

    while (n--) {
        cin >> s;

        if (s == "toFront") {
            int temp;
            cin >> temp;
            if (reversed) {
                x.push_back(temp);
            } else {
                x.push_front(temp);
            }
        } 
        else if (s == "push_back") {
            int temp;
            cin >> temp;
            if (reversed) {
                x.push_front(temp);
            } else {
                x.push_back(temp);
            }
        } 
        else if (s == "front") {
            if (!x.empty()) {
                if (reversed) {
                    cout << x.back() << endl;
                    x.pop_back();
                } else {
                    cout << x.front() << endl;
                    x.pop_front();
                }
            } else {
                cout << "No job for Ada?" << endl;
            }
        } 
        else if (s == "back") {
            if (!x.empty()) {
                if (reversed) {
                    cout << x.front() << endl;
                    x.pop_front();
                } else {
                    cout << x.back() << endl;
                    x.pop_back();
                }
            } else {
                cout << "No job for Ada?" << endl;
            }
        } 
        else if (s == "reverse") {
            reversed = !reversed;
        }
    }

    return 0;
}
