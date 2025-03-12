#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int a;
    cin >> a;
    vector<int>x;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    // int i;
    int j = 1;
    int mi = 0;
    for ( int i = 0; i < x.size()-1; i++)
    {
        
        if(x[j]<x[i]){
            int p = abs(x[j] - x[i]);
            a = a + p;
        }
        else if(x[j]>x[i]){
            int p = abs(x[j] - x[i]);
            a = a - p;
        }
        if(a<0){
            mi = 1;
            break;
        }
        
        j++;
    }
    if(mi==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    
    return 0;
}