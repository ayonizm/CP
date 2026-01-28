#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double l;
        cin>>l;
        sum = sum + l;
    }
    printf("%.12lf", sum / (double)n);

    return 0;
}