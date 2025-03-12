#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int t;
    cin >> t;
    int ol = 1;
    while (t--)
    {
        
        long long int f, k;
        cin >> f >> k;

        long long int a = 0;
        long long int b = 0;

        list<long long int> p;

        cout << "Case " << ol << ":\n";

        for (int i = 0; i < f; i++) {
            long long int j, m;
            cin >> j >> m;

            if (m < j) {
                b += m;
                while (!p.empty() && p.back() < j) {
                    a += p.back();
                    p.pop_back();
                }
                if (p.size() < k) {
                    p.push_back(j);
                } else {
                    a += j;
                }
            } else {
                a += j;
                while (!p.empty() && p.back() < m) {
                    b += p.back();
                    p.pop_back();
                }
                if (p.size() < k) {
                    p.push_back(m);
                } else {
                    b += m;
                }
            }
            // cout << a << " " << b<<endl;
            if (a > b) {
                cout << "Jodu\n";
            } else if (b > a) {
                cout << "Modu\n";
            } else {
                cout << "Draw\n";
            }
        }
        ol++;
        // for(auto v:p){
        //     cout << v << " " << endl;
        // }
    }
    
    
    return 0;
}
