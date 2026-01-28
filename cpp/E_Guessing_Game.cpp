#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    vector<int> x1;
    vector<int> x2;
    for (int i = 0; i < 4; i++)
    {
        int temp1,temp2;
        cin >> temp1>>temp2;
        x1.push_back(temp1);
        x2.push_back(temp2);
    }
    int a1 = *min_element(x1.begin(), x1.end());
    int a2 = *max_element(x1.begin(), x1.end());
    int b1 = *min_element(x2.begin(), x2.end());
    int b2 = *max_element(x2.begin(), x2.end());
    int k;
    cin >> k;
    while (k--)
    {
        int t1, t2;
        cin >> t1>>t2;
       if(t1>=a1&&t1<=a2&&t2>=b1&&t2<=b2){
           cout << "IN THE ZONE" << endl;
       }
        else{
            cout<<"NOOOOO!"<<endl;
        }
    }
    
    return 0;
}