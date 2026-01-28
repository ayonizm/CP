#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    double x, y;
    cin >> x >> y;
    double result = sqrt(pow(x, 2) + pow(y, 2));
    cout << fixed << setprecision(3) << result << endl;

    return 0;
}