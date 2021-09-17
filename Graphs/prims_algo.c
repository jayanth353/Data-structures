#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int find_minIndex(int key[],bool mst[],int v)
{
	int minIndex,min=INT_MAX;
    for(int i=0;i<v;++i)
    {
    	if(mst[i]==false && key[i]<min)
    	{
    		min=key[i];
    		minIndex=i;
    	}
    }
    return minIndex;
}

int  printMST(int v,int graph[][v],int parent[])
{
	int mwght=0;
	printf("Edge    \t weight");
 for(int i=1;i<v;++i)
 {   
 	printf("%d----%d \t%d",parent[i],i,graph[i][parent[i]]);
 	mwght+=graph[i][parent[i]];
 }
 printf("\nMST cost:%d",mwght);
}

void Prims(int ver,int graph[][ver])
{

	bool mstSet[ver]; //keeps track of vertices included in MST
	int key[ver];  //Array for relaxation of edges
	int parent[ver]; //Array to print final MST
	for(int i=0;i<ver;++i)
	{
		mstSet[i]=false; //marking all vertices as not visited
		key[i]=INT_MAX; //marking relaxation weights as infinity
	}
	key[0]=0; //Since Distance from src to src is 0
	parent[0]=-1;// Since 0 is itself a parent

	//Prims algo
	for(int count=0;count<ver-1;++count)//As MST contains V-1 edges the loop is iterated for V-1 times(for each iteration an edge is added in MST)
    {
    	int u=find_minIndex(key,mstSet,ver);//finds a vertex which has min weight and not included in mstSet
         mstSet[u]=true;
        //Relaxing edges:
        /* Constrains for relaxing edges
        1.veretex v Should be not included in MST
        2.edge weight should be minimum than current 
        3.Should be an edge between u and v
        */
        for(int v=0;v<ver;++v) //for traversing  adjacent vertices of u
        {
        	if(!mstSet[v] && graph[u][v] && graph[u][v]<key[v])
        	{
        		parent[v]=u;
        		key[v]=graph[u][v];
        	}
        }

    }
    printMST(ver,graph,parent);
}



int  main()
{
	int V;
	scanf("%d",&V);
	int graph[V][V];
	for(int i=0;i<V;++i)
	for(int j=0;j<V;++j)
	scanf("%d",&graph[i][j]);
	
    Prims(V,graph);
}
