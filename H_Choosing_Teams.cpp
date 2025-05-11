#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n1, k1;
    cin >> n1 >> k1;
    int a, cnt=0;
    for (int i = 0; i < n1; i++) {
        cin >> a;

        if (a + k1 <= 5) {
            cnt++;
        }
    }

    printf("%d", cnt / 3);

    return 0;
}