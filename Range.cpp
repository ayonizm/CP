#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    vector<int> x1;
    int n = 3;
    while (n--)
    {
        int temp;
        cin >> temp;
        x1.push_back(temp);
    }
    
    vector<int> x2=x1;
    sort(x2.begin(), x2.end());
    if(x1==x2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}