#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
       int term1, term2, final, at;
       cin >> term1 >> term2 >> final >> at;
       int sum = term1 + term2 + final + at;
       vector<int> x;
       for (int i = 0; i < 3; i++)
       {
          int temp;
          cin >> temp;
          x.push_back(temp);
       }
       sort(x.begin(), x.end());
       int pro = (x[1] + x[2])/2;
       sum = sum + pro;
       if(sum>=90){
          cout << "Case " << i << ": " << "A" << endl;
       }
       else if(sum<90&&sum>=80){

          cout << "Case " << i << ": " << "B" << endl;
       }
       else if(sum<80&&sum>=70){

          cout << "Case " << i << ": " << "C" << endl;
       }
       else if(sum<70&&sum>=60){

          cout << "Case " << i << ": " << "D" << endl;
       }
       else{
          cout << "Case " << i << ": " << "F" << endl;
       }
    }
    
    return 0;
}