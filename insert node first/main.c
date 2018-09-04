#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
   };
 struct node* head; //global variable can be accessed anywhere;

 void insert (int x)
{

 node*temp =(node*)malloc(sizeof(struct node));
 temp -> data=x;
 temp ->next=head;
 head=temp;
}
 void print()
 {
     struct node*temp=head;
     printf("list is")
     while(temp!=null)
     {

     printf("%d",temp->data);
        temp=temp->next;
 }
 printf("\n");
int main()
{
    head=null;  //empty list;
    int n,i,x;
    printf("how many numbers?\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter the number\n");
        scanf("%d",&x);
        insert (x);  //functions decleared
        print();     // function decleared
    }
    return 0;
}
