#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    set<long long int> x;
    int n;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        x.insert(temp);
    }
    cout << x.size() << endl;

    return 0;
}