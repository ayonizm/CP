#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    vector<int> x;
    while (n--)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    int m = *max_element(x.begin(), x.end());
    if(m==x[0]){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }


    return 0;
}