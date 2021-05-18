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

void deleteBegin()

{ 

    if(head!=NULL)

    {

    struct node*temp=head;

    

    head=head->next;

    head->prev=NULL;

    free(temp);

    }

    else cout<<"\nList is empty...";

}

void deleteEnd()

{

    if(head!=0)

    {

    struct node*temp=tail;

    

    tail=tail->prev;

    tail->next =NULL;

    free(temp);

    }

    else cout<<"\nList is empty...";

    

    

}

void deleteMid(int key)

{

    struct node*temp=head;

    while(temp!=NULL)

    {

        if(temp->data==key)

        {

            if(temp==head)

            {

              cout<<" \nBetter to choose option 1 instead....";

              return;

            }

            if(temp==tail)

            {

              cout<<" \nBetter to choose option 3 instead....";

              return;

            }

            (temp->prev)->next=temp->next;

            (temp->next)->prev=temp->prev;

            free(temp);

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

    cout<<"\n1.Delete at begining";

    cout<<"\n2.Delete at middle";

    cout<<"\n3.Delete  at end";

    cout<<"\n4.Display List";

    cout<<"\n5.Display reverse list\n";

     cout<<"\n";

    cin>>op;

        switch(op)

    {

      case 0:break;

      case 1: deleteBegin();

                                    display(); 

              break;

            

            case 2:int key;

                   cout<<"\nWhich num do u want to delete:";

                   cin>>key;

                   

                   deleteMid(key);

                   display();

                   break;

        case 3: deleteEnd();

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
