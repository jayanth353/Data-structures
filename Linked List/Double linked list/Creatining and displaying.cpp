/*
1. Define a Node class which represents a node in the list. It will have three properties: data, previous which will point to the previous node and next which will
   point to the next node.
2.Define another class for creating a doubly linked list, and it has two nodes: head and tail. Initially, head and tail will point to null.
3. addNode() will add node to the list:
    a.It first checks whether the head is null, then it will insert the node as the head.
    b.Both head and tail will point to a newly added node.
    c.Head's previous pointer will point to null and tail's next pointer will point to null.
    d.If the head is not null, the new node will be inserted at the end of the list such that new node's previous pointer will point to tail.
    e.The new node will become the new tail. Tail's next pointer will point to null.
4.display() will show all the nodes present in the list.
    a.Define a new node 'current' that will point to the head.
    b.Print current.data till current points to null.
    c.Current will point to the next node in the list in each iteration.

*/

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node*head=NULL,*tail=NULL;
void newnode(int d)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    if(head==NULL)
    {
        head=tail=newnode;
        head->left=NULL;
        tail->right=NULL;
    }
    else
    {
        tail->right=newnode;
        newnode->left=tail;
        tail=newnode;
        tail->right=NULL;
    }
}
void revdisplay()
{
    struct node*print=tail;
    
    while(print!=NULL)
    {
        cout<<print->data<<"->";
        print=print->left;
        
    }
    cout<<"NULL";
}
void display()
{
    struct node*print=head;
 
    while(print!=NULL)
    {
        cout<<print->data<<"->";
        print=print->right;
        
    }
    cout<<"NULL";
}
int main()
{
    cout<<"!!!...keep inserting values ,if you wish to stop inserting press -1";
    int val=1;
    while(val)
    {
        cout<<"\n Enter value:";
        cin>>val;
        if(val!=-1) newnode(val);
        else break;
    }
    cout<<"\n Forward traverse:";
    display();
    cout<<"\n Reverse traverse:";
    revdisplay();
    
}




















