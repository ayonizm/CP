#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    vector<long long int> x;
    for (long long int i = 0; i < n; i++)
    {
        long long int temp;
        cin >> temp;
        x.push_back(temp);
    }
    long long int count = 0;
    long long int sum = 0;
    for (long long int i = 0; i < x.size(); i++)
    {
        if(x[i]>0&&x[i]%6==0){
            count++;
            sum += x[i];
        }
    }
    cout << count << " " << sum;

    return 0;
}