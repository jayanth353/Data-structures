# Trees
> A Tree is a non-linear data structure where each node is connected to a number of nodes with the help of pointers or references.

Ex:
![](https://www.cdn.geeksforgeeks.org/wp-content/uploads/tree.jpg)

### Basic Tree Terminologies:
* Root: The root of a tree is the first node of the tree. In the above image, the root node is the node 30.
* Edge: An edge is a link connecting any two nodes in the tree. For example, in the above image there is an edge between node 11 and 6.
* Siblings: The children nodes of same parent are called siblings. That is, the nodes with same parent are called siblings. In the above tree, nodes 5, 11, and 63 are siblings.
* Leaf Node: A node is said to be the leaf node if it has no children. In the above tree, node 15 is one of the leaf nodes.
* Height of a Tree: Height of a tree is defined as the total number of levels in the tree or the length of the path from the root node to the node present at the last level. The above tree is of height 2.

## Binary tree
> A Tree is said to be a Binary Tree if all of its nodes have atmost 2 children. That is, all of its node can have either no child, 1 child, or 2 child nodes.
  
![](https://www.geeksforgeeks.org/wp-content/uploads/binary-tree-to-DLL.png)

### Properties:
1. The maximum number of nodes at level 'l' of a binary tree is (2<sup>l</sup> - 1). Level of root is 1
2. Maximum number of nodes in a binary tree of height 'h' is (2<sup>h</sup> – 1).
3. In a Binary Tree with N nodes, the minimum possible height or the minimum number of levels is Log<sub>2</sub>(N+1)
4. A Binary Tree with L leaves has at least (Log<sub>2</sub>L + 1) levels.
5. In a Binary tree in which every node has 0 or 2 children, the number of leaf nodes is always one more than the nodes with two children.  
  
### Types of trees
> Based on the structure and number of parents and children nodes, a Binary Tree is classified into the following common types:
* **Full Binary Tree**: A Binary Tree is full if every node has either 0 or 2 children. The following are examples of a full binary tree. We can also say that a full binary tree is a   binary tree in which all nodes except leave nodes have two children.


   ![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191211141452/226.png)
   ![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191211141440/136.png)
   
   
* **Complete Binary Tree**: A Binary Tree is a complete Binary Tree if all levels are completely filled except possibly the last level and the last level has all keys as left as possible

   ![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191211141521/416.png)
   ![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191211141536/520.png)
   
* **Perfect Binary Tree** : A Binary tree is a Perfect Binary Tree when all internal nodes have two children and all the leave nodes are at the same level.

   ![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191211141548/617.png)
   


