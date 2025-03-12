#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int f = n;
    int k = 0;
    for (int i = 0; i <f; i++)
    {
        for (int j = 0; j <k ; j++)
        {
            cout << " ";
        }
        for (int p = n; p <n+n ; p++)
        {
            cout << p << " ";
        }
        cout << endl;
        k++;
        n--;
    }
    
    return 0;
}