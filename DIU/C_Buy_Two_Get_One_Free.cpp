#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    vector<int> x;
    for (int i = 0; i < 3; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    int flag = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            int d = (x[i] + x[j]);
            if(d%2!=0){
                flag = 1;
            }
            
        }
        
    }
    if(flag){
        cout << "3 Kimonos for Nezuko";
    }
    else{
        cout << "You have to choose two";
    }
    
    return 0;
}