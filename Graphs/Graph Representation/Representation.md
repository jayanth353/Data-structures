# Representation of Graphs

A graph can be represented in the following ways:
1. Adjacency Matrix.
2. Adjacency List.

Let us look at each one of the above two method in details:<br>
* **Adjacency Matrix** : The Adjacency Matrix is a 2D array of size V x V where V is the number of vertices in a graph. Let the 2D array be adj[][], a slot adj[i][j] = 1 indicates 
that there is an edge from vertex i to vertex j. Adjacency matrix for undirected graph is always symmetric. Adjacency Matrix is also used to represent weighted graphs. 
If adj[i][j] = w, then there is an edge from vertex i to vertex j with weight w.

<p align="center">
 <img width="370" height="300" src="https://media.geeksforgeeks.org/wp-content/uploads/undirectedgraph.png" align="center">
</p>


  The adjacency matrix for the above example undirected graph is:
<p align="center">
 <img width="300" height="300" src="https://media.geeksforgeeks.org/wp-content/uploads/adjacencymatrix.png" align="center">
</p>

 **Pros**: Representation is easier to implement and follow. Removing an edge takes O(1) time. Queries like whether there is an edge from vertex 'u' to vertex 'v' are efficient and 
           can be done O(1).<br>
 **Cons**: Consumes more space O(V^2). Even if the graph is sparse(contains less number of edges), it consumes the same space. Adding a vertex is O(V^2) time.

* **Adjacency List** : Graph can also be implemented using an array of lists. That is every index of the array will contain a complete list. Size of the array is equal to the 
  number of vertices and every index i in the array will store the list of vertices connected to the vertex numbered i. Let the array be array[]. An entry array[i] represents the 
  list of vertices adjacent to the ith vertex. This representation can also be used to represent a weighted graph. The weights of edges can be represented as lists of pairs. 
  
  <p align="center">
    <img width="370" height="300" src="https://media.geeksforgeeks.org/wp-content/uploads/undirectedgraph.png" align="center">
  </p>

  Following is the adjacency list representation of the above example undirected graph.
  
  <p align="center">
    <img width="600" height="400" src="https://media.geeksforgeeks.org/wp-content/uploads/listadjacency.png" align="center">
  </p>
 **Pros** : Saves space O(|V|+|E|). In the worst case, there can be C(V, 2) number of edges in a graph thus consuming O(V^2) space. Adding a vertex is easier.

 **Cons** : Queries like whether there is an edge from vertex u to vertex v are not efficient and can be done O(V).
