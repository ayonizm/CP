#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    map<string, int> x;
    x["Icosahedron"] = 20;
    x["Cube"] = 6;
    x["Tetrahedron"] = 4;
    x["Dodecahedron"] = 12;
    x["Octahedron"] = 8;
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string l;
        cin >> l;
        count = count + x[l];
    }
    cout << count;
    return 0;
}