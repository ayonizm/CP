#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    double x;
    cin >> x;
    double y = (2 * x - 1) / (x * x) + sqrt(x * x + 1) / 2;
    cout << fixed << setprecision(3) << y << endl;

    return 0;
}