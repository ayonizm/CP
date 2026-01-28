#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

int main() {
    op();
    int n;
    cin >> n;

    while (n--) {
        int sum = 0;
        int wri = 10;
        int l;
        cin >> l;

        while (l--) {

            int k;
            cin >> k;
            int r = 0;

            for (int i = 0; i < k; i++) {
                char b;
                cin >> b;

                if(wri>0){

                if (b == 'N') {
                    sum++;
                    r = 1;
                }
                else if (b == 'W') {
                    sum++;
                }
                else if (b>='0'&&b<='9') {
                    sum += (b - '0');
                    r = 0;
                }

                else if (b == 'R') {
                    
                        wri--;
                    
                    r = 0;
                }
                else if (b == 'C' || b == 'B') {
                    if (r == 1) {
                        r = 0;
                        continue;
                    }
                    wri--;
                }
                }

            }
            
        }

        cout << sum << endl;
    }

    return 0;
}

