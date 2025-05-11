// // #include<stdio.h>
// // #include<string.h>
// // void sort(int ary[],int a){
// //     for (int i = 0; i < a-1; i++)
// //     {
// //         for (int j = i+1; j < a; j++)
// //         {
// //             if (ary[i]>ary[j])
// //             {
            
// //             int temp = ary[i];
// //             ary[i] = ary[j];
// //             ary[j] = temp;
                
// //             }
// //         }
        
// //     }
    
// // }
// // void rsort(int ary[],int a){
// //     for (int i = 0; i < a-1; i++)
// //     {
// //         for (int j = i+1; j < a; j++)
// //         {
// //             if (ary[i]<ary[j])
// //             {
            
// //             int temp = ary[i];
// //             ary[i] = ary[j];
// //             ary[j] = temp;
                
// //             }
// //         }
        
// //     }
    
// // }
// // void pr(int ar[],int x){
// //     for (int i = 0; i < x; i++)
// //     {
// //         printf("%d ", ar[i]);
// //     }
    
// // }
// // int main()
// // {
// //     int n;
// //     scanf("%d", &n);
// //     int ar[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         scanf("%d", &ar[i]);
// //     }
// //     sort(ar, n);
// //     pr(ar, n);
// //     rsort(ar, n);
// //     printf("\n");
// //     pr(ar, n);
    
// //     return 0;
// // }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int pos;
//     char name[100];
//     scanf("%s", &name);
//     for (int i = 0; i < strlen(name); i++)
//     {
//         if(name[i]=='.'){
//             pos = i;
//         }
//     }
//     int j = pos + 1;
//     for (int i = pos; i <strlen(name)-1 ; i++)
//     {
//         name[i] = name[j];
//         j++;
//     }
//     for (int i = 0; i < strlen(name)-1; i++)
//     {
//         printf("%c", name[i]);
//     }
    
//     return 0;
// }