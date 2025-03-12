#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    if(n<1582)
        {
            if (n % 4 == 0) {
            cout << "I can participate in LCPC" << endl;
             }
             else{
                 cout << "I have to travel back to the past" << endl;
             }
        }
        else
        {
            if(n%4==0&&n%100!=0||n%400==0){
                cout << "I can participate in LCPC" << endl;
            }
            else{
                cout << "I have to travel back to the past";
            }
        } 
        return 0;
}