#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int data;
    char ch[100];
    struct Node *next;
};

void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d %s\n", ptr->data, ptr->ch);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    strcpy(head->ch, "ayon");
    head->next = second;

    second->data = 9;
    strcpy(second->ch, "chowdhury");
    second->next = third;

    third->data = 12;
    strcpy(third->ch, "anisul");
    third->next = NULL;

    display(head);
    return 0;
}