#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    vector<long long int> x;
    for (long long int i = 1; i*i <=n; i++)
    {
        if(n%i==0){
            x.push_back(i);
          
                x.push_back(n / i);
            
        }
    }
    sort(x.begin(), x.end());
    long long int ol = x.size();
    for (long long int i = ol-1; i >=0; i--)
    {
        long long int f = 1;
        for (long long int j = 2; j*j <=x[i]; j++)
        {
            if(x[i]%(j*j)==0){
                f = 0;
                break;
            }
        }
        if(f==1){
            cout << x[i] << endl;
            break;
        }
        
        
    }
    
    
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     long long ans,i,j,n,m;
//     vector<long long>v;
//     while(cin>>n)
//     {
//        for(i=1;i*i<=n;i++)
//        {
//            if(n%i==0)
//            {
//                v.push_back(i);
//                v.push_back(n/i);
//            }
//        }
//        sort(v.begin(),v.end());
//        m=v.size();
//        for(i=m-1;i>=0;i--)
//        {
//            int flag=1;
//            for(j=2;j*j<=v[i];j++)
//            {
//                if(v[i]%(j*j)==0)
//                {
//                    flag=0;break;
//                }
//            }
//            if(flag==1)
//             {
//                 ans=v[i];break;
//             }

//        }
//        cout<<ans<<endl;
//     }
// return 0;
// }