#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    vector<long long int> x;
    while (n--)
    {
        long long int temp;
        cin >> temp;
        x.push_back(temp);
    }
    long long int y;
    cin >> y;
    while (y--)
    {
        long long int a;
        cin >> a;
        long long int j = 1;
        long long int flag = 1;
        for (long long int i = 0; i < x.size()-1; i++)
        {
            long long int sp = abs(x[i] - x[j]);
            if(x[i]<x[j]){
                a = a - sp;
            }
            else{
                a = a + sp;
            }
            if(a<0){
                flag = 0;
                break;
            }
            j++;
        }
        if(flag){
            cout << "Homecoming" << endl;
        }
        else{
            cout << "No way Home" << endl;
        }
    }
    

    return 0;
}