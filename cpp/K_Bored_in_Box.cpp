#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    double pi = 3.14159;
    double a;
    cin >> a;
    double tarea = (sqrt(3.00) / 4.00) * a * a;
    double carea = ((a * a * a) / (4.00 * tarea)) * ((a * a * a) / (4.00 * tarea)) * pi;
    double m = (carea - tarea)/3.00;
    double n = a / 2.00;
    double n1 = (n * n * pi)/2.00;
    double f = n1 - m;
    f = f * 3.00;
    printf("%.15lf\n", f);
    return 0;
}