#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define n 1000005
bool a[n];
long long int k=1;
long long int twin[n];
void nod_sv()
{
    long long int i,j;
    a[0]=a[1]=1;
    for(i=4;i<=n;i=i+2)
    {
        a[i]=1;
    }
    for(i=3;i<=sqrt(n);i=i+2)
    {
        for(j=i*i;j<=n;j=j+2*i)
        {
            a[j]=1;
        }
    }
    for(i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
           twin[k]=i;
           k++;
        }
    }
}
int main(){
    op();

    return 0;
}