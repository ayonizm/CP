#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n; 
    while (n--) {
        long long int cnt = 0;
        long long int ay;
        cin >> ay; 
        long long int a = ay;

        while (1) {
            cnt++;
            string a1 = to_string(a);
            reverse(a1.begin(), a1.end());
            long long int b = stoi(a1); 
            long long int c = a + b;

            string t = to_string(c);
            string l = t; 
            reverse(t.begin(), t.end());
            if (t == l) { 
                cout << cnt << " " << l << endl; 
                break; 
            } else {
                a = c; 
            }
        }
    }
    return 0;
}