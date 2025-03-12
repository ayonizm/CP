#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < 7; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    int sum = 0;
    int count = 0;
    while(sum<n){
        if(count==7){
            count = 0;
        }
        sum = sum + x[count];
        count++;
    }
    cout << count;
    return 0;
}