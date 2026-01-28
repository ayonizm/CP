#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int cs=1;
    ll n;
    cin>>n;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        vector<ll>x;
        for(int i=0; i<a; i++)
        {
            int y;
            cin>>y;
            x.push_back(y);
        }
        while(b--)
        {
            char o;
            cin>>o;
            if(o=='P')
            {
                int a1,a2;
                cin>>a1>>a2;
                swap(x[a1],x[a2]);
            }
            else if(o=='R')
            {
                reverse(x.begin(),x.end());
            }
            else if(o=='M')
            {
                int oi;
                cin>>oi;
                for(int i=0; i<x.size(); i++)
                {
                    x[i]=x[i]*oi;
                }
            }
            else if(o=='D')
            {
                int oi;
                cin>>oi;
                for(int i=0; i<x.size(); i++)
                {
                    x[i]=x[i]/oi;
                }
            }
            else if(o=='S')
            {
                int oi;
                cin>>oi;
                for(int i=0; i<x.size(); i++)
                {
                    x[i]=x[i]+oi;
                }
            }
        }
        cout<<"Case "<<cs++<<":"<<endl;
        for(auto v:x){
            cout<<v<<" ";
        }
        cout<<endl;
    }

    return 0;
}
