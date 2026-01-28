#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
long long int ncr(long long int n,long long int r){
    long long int x = 1, y = 1;
    if(n-r<r){
        r = n - r;
    }
    if(r!=0){
        while (r)
        {
            x = x * n;
            y = y * r;
            long long int gf = __gcd(x, y);
            x = x / gf;
            y = y / gf;
            n--;
            r--;
        }
        
    }
    else{
        x = 1;
    }
    return x;
}
int main(){
    op();
    long long ct = 1;
    long long int n;
    cin >> n;
    // cout << ncr(8, 3);
    while(n--){
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int nc = ncr(a, b);
        // long long int ans;
        vector<long long int> c1;
        for (long long int i = 0;; i++)
        {
            if(pow(c,i)>nc){
                break;
            }
            else{
                c1.push_back(pow(c,i));
            }
        }
        long long int rop = 0;
        vector<pair<int,int>> ovai;
        for(auto v:c1){

            if(nc%v==0){
                ovai.push_back({v, rop});
            }
            rop++;
            
        }
        // cout << endl;
        cout << "Case " << ct << ": " << ovai[ovai.size()-1].second << endl;
        ct++;
    }

    return 0;
}