#include <bits/stdc++.h>
using namespace std;

#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    op();
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        vector<int> x(a);
        
        for (int i = 0; i < a; i++) {
            cin >> x[i];
        }
        
        int sum = 0, l = 0;
        for (int i = 0; i < a; i++) {
            sum += x[i] / 2;
            l += x[i] % 2;
        }

        sum *= 2;
        int f = b - sum / 2;

        sum += min(f, l);
        if(f<l){
        cout << sum-1 << endl;

        }
        else{
        cout << sum << endl;
        }
    }

    return 0;
}
