#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    map<string, long long int> x;
   while(n--)
    {
        string temp1;
        int temp2;
        cin >> temp1 >> temp2;
        x[temp1] = temp2;
    }
    while(m--){
        string temp3;
        long long int sum = 0;
        char ei;
        while(cin>>ei&& ei!='.')
        {
            string temp8;
            getline(cin, temp8);
            temp3 = ei + temp8;
             string xyz;
        for(auto v:temp3){
            
            
            if(isspace(v)){
                sum = sum + x[xyz];
                xyz.clear();
                
            }
            else{
                xyz += v;
            }
            
            
        }
        sum = sum + x[xyz];
        }
        cout << sum << endl;
        temp3.clear();
    }

    return 0;
}