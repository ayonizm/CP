#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int


int main() {
    op();
    ll a;
    cin >> a;
    while (a--) {
        string s;
        cin >> s;

        ll vc = 0;

    
        for (int i = 0; i < s.length(); i++) {
            int p[26] = {0};

     
            for (int j = i; j < s.length(); j++) {
              
                p[s[j] - 'a']++;

        
                ll kj = 0;
                for (int k = 0; k < 26; k++) {
                    if (p[k] % 2 != 0) {
                        kj++;
                    }
                }

                if (kj <= 1) {
                    vc++;
                }
            }
        }

        cout << vc << endl;
    }

    return 0;
}
