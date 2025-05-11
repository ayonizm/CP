#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    int space = 0;

    for (int i = 0; i < s.length(); i += 3) {
        if (s[i + 1] != '/') {
            cout << string(space, ' ') << s[i] << s[i + 1] << s[i + 2] << endl;
            space += 2;
        } else {
            space -= 2;

            cout << string(space, ' ') << s[i] << s[i + 1] << s[i + 2] <<s[i+3]<< endl;
            i++;
        }
    }
    return 0;
}