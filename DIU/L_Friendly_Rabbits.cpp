#include <bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
    op();
    int n;
    cin >> n;
    vector<int> a(n);
    int count = 0;
    for (int i = 0; i < n;i++) {
        cin >> a[i];
        a[i]--; 
    }

    
    for (int i = 0; i < n; i++) {
        int j = a[i];
        if(j<=i){
            continue;
        }
        if (a[j] == i) { 
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
