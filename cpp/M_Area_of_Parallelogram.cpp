#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    while (n--)
    {
        long long int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        // long long int x = x1 - x3;
        // long long int y = y1 - y3;
        // long long int m = (x * x) + (y * y);
        // long long int l1 = sqrt(m);
        // long long l1 = abs(x1 - x3);
        // long long l2 = abs(y1 - y2);
         long long area = abs((x1 - x3) * (y2 - y1) - (x2 - x1) * (y3 - y1));
        // long long int l2 = (y2 - y3);
        cout << area<< endl;
        
    }
    
    return 0;
}