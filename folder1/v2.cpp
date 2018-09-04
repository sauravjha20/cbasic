#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};

void push(struct node**href,int newdata)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=newdata;
	newnode->next=*href;
       *href=newnode;
}

int getcount(struct node* head)
{
	int count=0;
	struct node* current=head;
	while(current!=NULL)
	{
		count++;
		current=current->next;
	}
	return count;
}

int main()
{
    /* Start with the empty list */
    struct node* head = NULL;
 
    /* Use push() to construct below list
     1->2->1->3->1  */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);
 
    /* Check the count function */
    printf("count of nodes is %d", getcount(head));
    return 0;
}
