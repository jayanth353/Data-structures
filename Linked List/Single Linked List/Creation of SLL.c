/*
1.Create a class Node which has two attributes: data and next. Next is a pointer to the next node.
2.Create another class which has two attributes: head and tail.
3.addNode() will add a new node to the list:
a.Create a new node.
b.It first checks, whether the head is equal to null which means the list is empty.
c.If the list is empty, both head and tail will point to the newly added node.
d.If the list is not empty, the new node will be added to end of the list such that tail's next will point to the newly added node. This new node will become the new tail of the list.
4.display() will display the nodes present in the list:
a.Define a node current which initially points to the head of the list.
b.Traverse through the list till current points to null.
c.Display each node by making current to point to node next to it in each iteration.*/
#include<stdio.h>
#include<stdlib.h>
struct node { 
    int data; 
    struct node* next; 
}; 
struct node *head, *tail = NULL;
void addNode(int d)
{
    struct node * newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next =NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
       {
       tail->next=newnode;
        tail=newnode;
       }

}
void display()
  {
     if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    while(head!=NULL)
    {
        printf("%d -> ",head->data);
        head=head->next;
     }
   }

int main()
{
   
    
    printf("\n If u want to stop inserting press 0:");
    int val=1;    

    while(val)
    {
        printf("\n Enter value to insert");
        scanf("%d",&val);
        if(val==0) break;
        else{
            addNode(val);
             }
    }
        
    display();
  return 0;
}
