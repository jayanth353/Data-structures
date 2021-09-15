#include<stdio.h>
#include<stdlib.h>
#define size 10
typedef struct node
{
	int d;
	struct node* next;
} node;
typedef struct graph
{
	int v;
	int *vis;
	struct node** adj;
} graph;

typedef struct queue
{
	int items[size];
	int rear;
	int front;
} queue;



node*cnode(int v)
{
	node*nn=malloc(sizeof(node));
	nn->next=NULL;
	nn->d=v;
	return nn;
}
graph* cgraph(int ver)
{
	
	graph*g=malloc(sizeof(graph));
	g->v=ver;
	g->vis=malloc(ver*sizeof(int));
	g->adj=malloc(ver*sizeof(node));

	for(int i=0;i<ver;++i)
	{
		g->vis[i]=0;
		g->adj[i]=NULL;
	}
	return g;
}
queue * cqueue()
{
	queue*q=malloc(sizeof(queue));
	q->rear=-1;
	q->front=-1;
	return q;

}
int empty(queue*q)
{
 if(q->rear==-1) return 1;
 return 0;
}
void eq(queue*q,int v)
{
	if(q->rear==size-1) printf("queue is full");
	else 
	{
		if(q->front==-1) q->front=0;
		q->rear++;
		q->items[q->rear]=v;

	}
}

void print(graph*ngraph)
{
	
  for(int i=0;i<ngraph->v;i++)
  {
  	printf("[%d]",i);
  	node*temp=ngraph->adj[i];
  	while(temp)
  	{
  		printf("->%d",temp->d);
  		temp=temp->next;
  	}
  	printf("\n");
  }
}

int dq(queue*q)
{
	int v;
  if(empty(q)) 
  	{
  		printf("\n Queue is empty");
  	  	v=-1;
  	 }
  else 
  {
    v=q->items[q->front];
    q->front++;
    if(q->front > q->rear)
    {
    	
    	q->front=q->rear=-1;
    }
  }
  return v;
}
void bfs(graph*g,int src)
{
	
	queue*q=cqueue();
    g->vis[src]=1;
    eq(q,src);
    while(!empty(q))
    {
    	int cv=dq(q);
    	printf("%d->",cv);
    	node*temp=g->adj[cv];
    	while(temp)
    	{
    		int t=temp->d;
    		if(g->vis[t]==0) 
    		{
    			g->vis[t]=1;
    			eq(q,t);
    		}
    		temp=temp->next;
    	}
    }
}


void addEdge(graph*g,int src,int dest)
{
	node*nn=cnode(dest);
	nn->next=g->adj[src];
	g->adj[src]=nn;
  
  if(src!=dest)
  {
	nn=cnode(src);
	nn->next=g->adj[dest];
	g->adj[dest]=nn;	
  }
}




int  main()
{
	
  graph*g = cgraph(4);
  addEdge(g, 0, 1);
  addEdge(g, 0, 2);
  addEdge(g, 1, 2);
  addEdge(g, 2, 3);
  addEdge(g, 3, 3);
  printf("Adjacency list:\n");
  print(g);
printf("BFS:");
  bfs(g, 2);
printf("NULL");
  return 0;

} 
/*
Output:
Adjacency list:
[0]->2->1
[1]->2->0
[2]->3->1->0
[3]->3->2
BFS:2->3->1->0->NULL
*/
