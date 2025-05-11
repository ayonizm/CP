#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int x, y;
    cin >> x >> y;
    int count = 0;
    while (1)
    {
        count++;
        x = x * 3;
        y = y * 2;
        if (x>y)
        {
            break;
        }
        
    }
    cout << count << endl;
    return 0;
}