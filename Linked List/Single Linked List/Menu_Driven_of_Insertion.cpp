
#include<bits/stdc++.h>
using namespace std;
struct node { 
    int data; 
    struct node* next; 
}; 
struct node *head, *tail = NULL;
void addNode(int d)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
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
void insertMiddle(int mid,int data)
{
    
    struct node*temp=head;
    while(temp!=NULL)
    {
     
        if(temp->data==mid)
        {
             struct node*newNode=(struct node*)malloc(sizeof(struct node));
             struct node*temp2=temp->next;
             newNode->data=data;
             temp->next=newNode;
            newNode->next=temp2;
            return;
        }
        else
        {
            temp=temp->next;
        }
    }
    cout<<"Sry..."<<mid<<" is not in the list..!\n";
}
void insertEnd(int data)
{
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    tail->next=newNode;
    tail=newNode;
    newNode->next=NULL;
    
  
}
void insertBegining(int data)
{
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=head;
    head=newNode;
  
    
}
void display()
  {
    struct node*print=head;
     if(print == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    cout<<"Current List:";
    while(print!=NULL)
    {
        printf("%d -> ",print->data);
        print=print->next;
     }
    cout<<"NULL";
   }
int main()
{
   
    
    printf("\n Keep inserting nmbers,If u want to stop inserting press 0:");
    int val=1,op;    

    while(val)
    {
        printf("\n Enter value to insert:");
        scanf("%d",&val);
        if(val==0) break;
        else{
            addNode(val);
             }
    }
      
     display();
    do{
    cout<<"\nChoose an Option";
    cout<<"\n0.Exit";
    cout<<"\n1.Insertion at begining";
    cout<<"\n2.Insertion at middle";
    cout<<"\n3.Insertion at end";
    cout<<"\n4.Display List\n";
     cout<<"\n";
    cin>>op;
        switch(op)
		{
			case 0:break;
			case 1: int beg;
			        cout<<"\nEnter the num that u wanted to Insert at begining:";
                    cin>>beg;
                    insertBegining(beg);
                    display(); 
				   break;
            
            case 2:int mid,key;
                   cout<<"\nEnter num in which u want to insert after and num u want to be inserted:";
                   cin>>mid>>key;
                   insertMiddle(mid,key);
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
		    default :cout<<"\n Enter correct option";
		             break;
		}
   }while(op!=0);
    
  return 0;
}
    
