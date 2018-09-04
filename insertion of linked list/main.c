#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node* next;
    };
    /* inserts a node in the front of the list*/
    void push(struct node** head_ref,int new_data)
    {
        struct node* new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data=new_data;
        new_node->next=(*head_ref);
        (*head_ref)=new_node;

    }
    void insertafter(struct node* prev_node,int new_data)
    {
        if (prev_node==NULL);
        {printf("the given previous node cannot be null");
        return;
        }
        struct node* new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data=new_data;
        new_node->next=prev_node->next;
        prev_node=new_node;
    }
 void append(struct node** head_ref,int new_data)
 {
     struct node* new_node=(struct node* )malloc(sizeof(struct node));
     struct node* last=*head_ref;
     new_node->data=new_data;
     new_node->next=NULL;
     if(*head_ref==NULL)
        {
            *head_ref=new_node;
            return;

        }
        while(last->next!=NULL)
            last=last->next;
        last->next=new_node;
        return;
        }
    void printlist(struct node* node)
    {

        printf("%d",node->data);
        node=node->next;
    }

int main()
{
    struct node* head=NULL;
    append(&head,6);
    push(&head,7);
    push(&head,1);
    append(&head,4);
    insertafter(head->next,8);
    printf("created link list is\n");
    printlist(head);
    return 0;

}
