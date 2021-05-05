#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node*head=NULL,*tail=NULL;
void insert(int d)
{
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=d;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
        tail->next=newNode;
        tail=newNode;
    }
}
void display()
{
    struct node*print=head;
    if(head==NULL)
    cout<<"List is Empty";
    else
    {
    while(print!=NULL)
    {
        cout<<print->data<<"->";
        print=print->next;
    }
    cout<<"NULL\n";
    }
}
void delHead()
{
    struct node*temp=head;
    head=temp->next;
    free(temp);
}
void delMiddle(int key)
{
    struct node*temp=head,*prev;
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL) cout<<"\nSry... there is no "<<key<<"in the list";
    else 
    {
        prev->next=temp->next;
        free(temp);
    }
}
void delEnd()
{
    
      struct node*temp1=head,*prev1;
      while(temp1->next!=NULL)
      {
          prev1=temp1;
          temp1=temp1->next;
      }
      
    prev1->next=NULL;
     
}
int main()
{
    int val=1;
   cout<<"Insert values into list";
   cout<<"\n!!!If u finish press -1!!!";
    while(val)
    {
        cout<<"\nEnter num to insert:";
        cin>>val;
        if(val==-1) break;
        insert(val);
    }
    int op;
   
    do{
    cout<<"\nChoose an Option";
    cout<<"\n0.Exit";
    cout<<"\n1.Deletion at begining";
    cout<<"\n2.Deletion at middle";
    cout<<"\n3.Deletion at end";
    cout<<"\n4.Display List\n";
     cout<<"\n";
    cin>>op;
        switch(op)
		{
			case 0:break;
			case 1: delHead();
                   display();
				   break;
            
            case 2:int mid;
                   cout<<"\nEnter num that u want to delete in the list:";
                   cin>>mid;
                   delMiddle(mid);
                   display();
                   break;
		    case 3:delEnd();
                   display();
		           break;
		  
		    case 4 :display();
		    		break;
		    default :cout<<"\n Enter correct option";
		             break;
		}
   }while(op!=0 && head!=NULL);
    
}








