#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    scanf("%d", &n);
    float ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &ar[i]);
    }
    int pos;
    float num;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(ar[i]<=(float)2.5){
            num = ar[i];
            pos = i + 1;
            flag = 1;
            break;
        }
        
    }
    if(flag == 0){
        printf("Not Found\n");
    }
    else{
    printf("%d %.2f", pos, num);
    }

    return 0;
}