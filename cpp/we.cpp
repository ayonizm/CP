#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int k = 2019;
    int od = 0;
    int ev = 0;
    for (int i = 1; i <=k; i++)
    {
        if(i%2==0){
            ev += i;
        }
        else{
            od += i;
        }
    }
    cout << abs(ev - od) << endl;

    return 0;
}