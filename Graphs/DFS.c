#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int data;
	struct node* next;
} node;
node*cnode(int v);
typedef struct graph
{
	int v;
	bool *vis;
	struct node** adj;
} graph;

node* cnode(int d)
{
	node*nn=malloc(sizeof(node));
	nn->data=d;
	nn->next=NULL;
	return nn;
}

graph* cgraph(int ver)
{
	graph*ngraph=malloc(sizeof(graph));
	ngraph->v=ver;
	ngraph->vis=malloc(ver*sizeof(int));
	ngraph->adj=malloc(ver*sizeof(node));
	for(int i=0;i<ver;++i)
	{
		ngraph->adj[i]=NULL;
		ngraph->vis[i]=false;
	}
	return ngraph;
}
void addEdge(graph*ngraph,int src,int dest)
{
	node*newn=cnode(dest);
	newn->next=ngraph->adj[src];
	ngraph->adj[src]=newn;
    if(src!=dest)
    {
    	node*newm=cnode(src);
    	newm->next=ngraph->adj[dest];
    	ngraph->adj[dest]=newm;
    }
}
void print(graph*ngraph,int V)
{
	
  for(int i=0;i<V;i++)
  {
  	printf("[%d]",i);
  	node*temp=ngraph->adj[i];
  	while(temp)
  	{
  		printf("->%d",temp->data);
  		temp=temp->next;
  	}
  	printf("\n");
  }
}

void dfs(graph*g,int src)
{
	node*adjl=g->adj[src];
	node*temp=adjl;
  g->vis[src]=true;
  printf("%d->",src);
 while(temp)
 {
     int v=temp->data;
     if(g->vis[v]==false)
     	dfs(g,v);
     temp=temp->next;
 }
  	
}

int  main()
{
  /*Input from user:
  int edges,vertices;
  scanf("%d %d",&vertices,&edges);
  graph*g=cgraph(vertices);  //creates vertices from 0 to vertices v-1
  for(int i=0;i<edges;++i)
  {
  int src , dest;
  scanf("%d %d",&src,&dest); 
  addEdge(g,src,dest); //addes edge between src and dest
  }
  */
	graph*g=cgraph(7); 
	 addEdge(g, 1, 2);
  addEdge(g, 1, 3);
  addEdge(g, 1, 4);
  addEdge(g, 2, 5);
  addEdge(g, 2, 6);
  printf("Adjaceny Matrix of a Graph;\n");
  print(g,7);
  printf("\n DFS:");
  dfs(g,1);

}

/* Output:
Adjaceny Matrix of a Graph:
[0]
[1]->4->3->2
[2]->6->5->1
[3]->1
[4]->1
[5]->2
[6]->2

 DFS:1->4->3->2->6->5-> */


