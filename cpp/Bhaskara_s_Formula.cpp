#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double t = (-b + sqrt((b * b) - (4.0 * a * c))) / (2.0 * a);
    cout << t << endl;
    return 0;
}