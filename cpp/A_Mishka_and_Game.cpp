#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if(x>y){
            count1++;
        }
        else if(x<y){
            count2++;
        }
    }
    if(count1==count2){
        cout << "Friendship is magic!^^" << endl;
    }
    else if(count1>count2){

        cout << "Mishka" << endl;
    }
    else{
        cout << "Chris" << endl;
    }
    return 0;
}