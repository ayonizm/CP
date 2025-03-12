#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define PI acos(-1)
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        double x;
        cin >> x;
        double width = (6.00*x) / 10.00;
        double area1 = width * x;
        double rad = 1.00 * (x / 5.00);
        double y = PI * rad * rad;
        printf("%.2lf %.2lf\n", y, area1 - y);
        
    }
    
    return 0;
}
