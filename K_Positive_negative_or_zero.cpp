#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n;
    cin >> n;

    if (n > 0)
    {
        cout << "Positive" << endl;
    }
    else if (n < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }

    
    return 0;
}