#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main() {
    op();
    int n;
    cin >> n;
    int i = 1;
    while (n--) {
        cout << "Case "<<i<<": " endl;
        int o;
        cin >> o;
        string s;
        cin >> s;
        string k = s;
        int ei;
        cin >> ei;
        while (ei--) {
            int we;
            cin >> we;
            char el;
            cin >> el;
            s[we-1] = el;
        vector < string > x;
            for (int i = 0; i < s.length(); i++) {
                for (int j = 2; j <= s.length() - i; j++) {
                    string k = s.substr(i, j);
                    string l = k;
                    reverse(l.begin(), l.end());
                    if (l == k) {
                        x.push_back(k);
                    }
                }
            }
            if(x.empty()){
                cout << "0" << endl;
                continue;
            }
            string max = x[0];
            for (int i = 0; i < x.size(); i++) {
                if (x[i].length() >= max.length()) {
                    max = x[i];
                }
            }
            // for(auto v:x){
            //     cout << v << endl;
            // }
            // cout << endl;
            // cout << max << endl;
            // cout << endl;
            cout << max.length() << endl;
        }
        i++;
    }

    return 0;
}