#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*prev;
    struct node*next;
};
struct node*head=NULL,*tail=NULL;
void newnode(int d)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=tail=newnode;
        head->prev=NULL;
        tail->next=NULL;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
        tail->next=NULL;
    }
}
void revdisplay()
{
    if(head==NULL)
    {
        cout<<"\nList is empty.....!";
    }
    else {
        struct node*print=tail;
    
    while(print!=NULL)
    {
        cout<<print->data<<"->";
        print=print->prev;
        
    }
    cout<<"NULL";
        
    }
}
void display()
{
    if(head==NULL)
    {
        cout<<"List is Empty....!!";
        
    }
    else
   { 
    struct node*print=head;
 
    while(print!=NULL)
    {
        cout<<print->data<<"->";
        print=print->next;
        
    }
    cout<<"NULL";
       
   }
}


void insertBegin(int b)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=b;
    newnode->prev=NULL;
    newnode->next=NULL;
    
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
    head->prev=NULL;
}
void insertEnd(int e)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=e;
    newnode->prev=NULL;
    newnode->next=NULL;
    
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    
    
}
void insertAfter(int a,int key)
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            struct node*newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=a;
            newnode->prev=NULL;
            newnode->next=NULL;
            
            struct node*tmp=temp->next;  
            temp->next=newnode;
            newnode->prev=temp;
            newnode->next=tmp;
            tmp->prev=newnode;
            return;
        }
        else temp=temp->next;
    }
   cout<<"\n There is no "<<key<<" in the list...";
    
    
}

int main()
{
    cout<<"!!!...keep inserting values ,if you wish to stop inserting press -1";
    int val=1,op;
    while(val)
    {
        cout<<"\n Enter value:";
        cin>>val;
        if(val!=-1) newnode(val);
        else break;
    }

    cout<<"\nCurrent list:";
     display();
    do{
    cout<<"\nChoose an Option";
    cout<<"\n0.Exit";
    cout<<"\n1.Insertion at begining";
    cout<<"\n2.Insertion at middle";
    cout<<"\n3.Insertion at end";
    cout<<"\n4.Display List";
    cout<<"\n5.Display reverse list\n";
     cout<<"\n";
    cin>>op;
        switch(op)
		{
			case 0:break;
			case 1: int beg;
			        cout<<"\nEnter the num that u wanted to Insert at begining:";
                    cin>>beg;
                    insertBegin(beg);
                    display(); 
				   break;
            
            case 2:int key,value;
                   cout<<"\nAfter which num do u want to insert:";
                   cin>>key;
                   cout<<"\nEnter num that u want to insert:";
                   cin>>value;
                   insertAfter(value,key);
                   display();
                   break;
		    case 3:int end;
                   cout<<"\nEnter the num that u wanted to Insert at end:";
                   cin>>end;
                   insertEnd(end);
                   display();
		           break;
		  
		    case 4 :display();
		    		break;
		    case 5 :revdisplay();
		            break;
		    default :cout<<"\n Enter valid  option....!!";
		             break;
		}
   }while(op!=0 && head!=NULL);
    
  return 0;
}
