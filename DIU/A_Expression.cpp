#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> x;
    x.push_back((a * b) + c);
    x.push_back((a + b) * c);
    x.push_back(a + (b * c));
    x.push_back(a * (b + c));
    x.push_back(a * b * c);
    x.push_back(a + b + c);
    cout << *max_element(x.begin(), x.end()) << endl;
    return 0;
}