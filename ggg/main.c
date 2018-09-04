#include <stdio.h>
#include <stdlib.h>

struct node {

                int data;
                struct node* next;
                };
int main()
{
    struct node* head=NULL;
    struct node* second=NULL;
    struct node* third=NULL;

    // to allocate nodes in the heap //
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    // allocate the memory ni the nodes//
    head->data=2;
    head->next= second;

    /* in second node*/
    second->data =2;
    second->next = third;
    third->data=3;
    third->next = NULL;
    return 0;
}


