#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    op();
    int n;
    cin >> n;
    set<int> x;
    while (n--)
    {
        int t;
        cin >> t;
        int temp;
        cin >> temp;
        if(t==1){
            x.insert(temp);
        }
        else if(t==2){
            x.erase(temp);
        }
        else if(t==3){
            set<int>::iterator it;
            it = x.find(temp);
            if(it!=x.end()){
                cout << "Yes" << endl;
            }
            else{

                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}