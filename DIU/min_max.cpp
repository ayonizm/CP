#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mini = min({a,b,c,d});
    int maxi = max({a,b,c,d});
    cout<<mini <<" "<<maxi <<endl;
    return 0;
}