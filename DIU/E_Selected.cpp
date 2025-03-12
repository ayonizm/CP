#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    if(n==3){
        cout << "Yes" << endl;
        return 0;
    }
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        if(temp>0){
            count++;
            if(count>2){
                break;
            }
        }
    }
    if(count>2){
        n++;
    }
    if(n>=3){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}