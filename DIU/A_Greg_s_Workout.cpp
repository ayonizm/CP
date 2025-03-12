#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int chest = 0, bicep = 0, back = 0;
    for (int i = 1; i <= n; i++)
    {
        int l;
        cin >> l;
        if(i%3==1){
            chest = chest + l;
        }
        else if(i%3==2){
            bicep = bicep + l;
        }
        else if(i%3==0){
            back = back + l;
        }
    }
    if(chest>=bicep&&chest>=back){
        cout << "chest" << endl;
    }
    else if(bicep>=chest&&bicep>=back){
        cout << "biceps" << endl;
    }
    else{
        cout << "back" << endl;
    }
    return 0;
}