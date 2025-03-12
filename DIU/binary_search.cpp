#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n;
    cin >> n;
    int k = n;
    vector<int> x;
    while (k--)
    {
        int t;
        cin >> t;
        x.push_back(t);
    }
    int tar;
    cin >> tar;
    sort(x.begin(), x.end());
    int s = 0;
    int e = n - 1;
    int pos = -1;
    while (s<=e)
    {
        int mid = (s + e) / 2;
        if(tar>x[mid]){
            s = mid + 1;
        }
        else if(tar<x[mid]){
            e = mid - 1;
        }
        else{
            pos = e;
            break;
        }
    }
    cout << pos << endl;

    return 0;
}