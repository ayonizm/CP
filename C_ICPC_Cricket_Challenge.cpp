#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b;
    cin >> a >> b;
    vector<int> x;
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    int count = 0;
    
    for (int i = 0; i < a-1; i++)
    {
       if(x[i]+x[i+1]>b){
           count++;
       }
    //    cout << x[i] << " " << x[i+1] << endl;
    }
    cout << count << endl;

    return 0;
}
