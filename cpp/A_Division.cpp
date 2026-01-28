#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        if(l<=1399){
            cout << "Division 4" << endl;
        }
        else if(l<=1599){
            cout << "Division 3" << endl;

        }
        else if (l<=1899)
        {
            cout << "Division 2" << endl;
        }
        else{
            cout << "Division 1" << endl;
        }
    }
    
    return 0;
}