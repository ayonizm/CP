#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int

int main(){
    op();
    double t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    double rate = (t1 > 0 ? 1 / t1 : 0) + (t2 > 0 ? 1 / t2 : 0) + (t3 > 0 ? 1 / t3 : 0);
    double time = 1 / rate;

    cout << fixed << setprecision(2) << time << endl;
    return 0;
}