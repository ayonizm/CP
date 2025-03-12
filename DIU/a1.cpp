// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // struct st{
// // //     int data;
// // //     struct st *next;
// // // };
// // // void hello(struct st *ptr)
// // // {
// // //     while (ptr != NULL)
// // //     {
// // //         printf("Element: %d\n", ptr->data);
// // //         // printf("Element: %d\n", ptr->next);
// // //         ptr = ptr->next;
// // //     }
// // // }
// // // int main(){
// // //     struct st *head;
// // //     struct st *second;
// // //     struct st *third;
// // //     struct st *fourth;
// // //     head = (struct st *)malloc(sizeof(struct st));
// // //     second = (struct st *)malloc(sizeof(struct st));
// // //     third = (struct st *)malloc(sizeof(struct st));
// // //     fourth = (struct st *)malloc(sizeof(struct st));

// // //     head->data = 7;
// // //     head->next = second;

// // //     second->data = 78;
// // //     second->next = third;

// // //     third->data = 56;
// // //     third->next = fourth;

// // //     fourth->data = 43;
// // //     fourth->next=NULL;

// // //     hello(head);
// // //     return 0;
// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // #define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// // struct node{
// //     int data;
// //     struct node *next;
// // };
// // void pri(struct node *ptr)
// // {
// //     while (ptr != NULL)
// //     {
// //         printf("Element: %d\n", ptr->data);
// //         ptr = ptr->next;
// //     }
// // }
// // int main(){
// //     op();
// //     struct node *head;
// //     struct node *first;
// //     struct node *second;
// //     struct node *last;

// //     head = (struct node *)malloc(sizeof(struct node));
// //     first = (struct node *)malloc(sizeof(struct node));
// //     second = (struct node *)malloc(sizeof(struct node));
// //     last = (struct node *)malloc(sizeof(struct node));

// //     // head->data = 2;
// //     printf("give head data\n");
// //     scanf("%d", &head->data);
// //     head->next = first;
    
// //     printf("give first data\n");
// //     scanf("%d", &first->data);

// //     first->next = second;

// //     printf("give second data\n");
// //     scanf("%d", &second->data);

// //     second->next = last;

// //     printf("give last data\n");
// //     scanf("%d", &last->data);
// //     last->next = NULL;

// //     pri(head);
// //     return 0;
// // }
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// } *head = NULL,*temp=NULL,*last=NULL;
// void pri(struct node *ptr){
//     while (ptr!=NULL)
//     {
//         printf("element %d\n", ptr->data);
//         ptr = ptr->next;
//     }
    
// }
// int main(){
//     int num, i;
//     scanf("%d", &num);
//     for (int i = 0; i < num; i++)
//     {
//         if(temp==NULL){
//             temp = (struct node *)malloc(sizeof(struct node));
//             scanf("%d", &temp->data);
//             head = temp;
//             last = temp;
//         }
//         else{
//             temp = (struct node *)malloc(sizeof(struct node));
//             scanf("%d", &temp->data);
//             last->next = temp;
//             last = temp;
//         }
//     }
//     last->next = NULL;
//     pri(head);
// }
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {

//     int data;
//     struct node *next;
// } *head = NULL, *temp = NULL, *last = NULL;

// void cin(struct node *p)
// {

//     while (p != NULL)
//     {
//         printf("%d ", p->data);
//         p = p->next;
//     }
// }

// int main()
// {

//     int n;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         if (temp == NULL)
//         {
//             temp = (struct node *)malloc(sizeof(struct node *));
//             scanf("%d", &temp->data);
//             last = temp;
//             head = temp;
//         }

//         else
//         {
//             temp = (struct node *)malloc(sizeof(struct node *));
//             scanf("%d", &temp->data);
//             last->next = temp;
//             last = temp;
//         }
//     }
//     last->next = NULL;

//     cin(head);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
struct st
{
    int data;
    struct st *next, *prev;
} *head = NULL, *temp = NULL, *last = NULL, *tail = NULL;

typedef struct st br;

void creation()
{
    int i, num;
    printf("Enterb the node number:");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {

        if (temp == NULL)
        {
            printf("Enter the data to node: ");
            temp = (br *)malloc(sizeof(br));
            scanf("%d", &temp->data);
            head = temp;
            last = temp;
            head->prev = NULL; /// only for doubly linked list purpose
        }
        else
        {
            temp = (br *)malloc(sizeof(br));
            printf("Enter the vale to node:");
            scanf("%d", &temp->data);
            last->next = temp;
            temp->prev = last; /// only for doubly linked list purpose
            last = temp;
        }
    }
    last->next = NULL;

    printf("Node Created Succeffuly\n");
}
void NextNode()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void PrevNode()
{
    temp = last;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->prev;
    }
    printf("NULL");
}
int main()
{
    int opction;
    while (1)
    {
        printf("1. creation\n");
        printf("2. next\n");
        printf("3. prev\n");
        printf("Enter you opction: ");
        scanf("%d", &opction);
        switch (opction)
        {
        case 1:
            creation();
            break;
        case 2:
            NextNode();
            break;
        case 3:
            PrevNode();
            break;
        default:
            printf("Wrong Choise--Please Try Again:\n");
            break;
        }
    }

    return 0;
}