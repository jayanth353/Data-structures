# Linked List
> **Linked Lists** are linear or sequential data structures in which elements are stored at non-contiguous memory locations and are linked to each other using pointers.
 
Like arrays, linked lists are also linear data structures but in linked lists elements are not stored at contiguous memory locations. They can be stored anywhere in the memory
but for sequential access, the nodes are linked to each other using pointers.

Each element in a linked list consists of two parts:
1. Data: This part stores the data value of the node. That is the information to be stored at the current node.
2. Next Pointer: This is the pointer variable or any other variable which stores the address of the next node in the memory.

![](https://www.geeksforgeeks.org/wp-content/uploads/gq/2013/03/Linkedlist.png)

* Advantages of Linked Lists over Arrays: Arrays can be used to store linear data of similar types, but arrays have the following limitations:
1. The size of the arrays is fixed, so we must know the upper limit on the number of elements in advance. Also, generally, the allocated memory is equal to the upper limit 
   irrespective of the usage. On the other hand, linked lists are dynamic and the size of the linked list can be incremented or decremented during runtime.
2. Inserting a new element in an array of elements is expensive, because a room has to be created for the new elements, and to create room, existing elements have to shift

* Disadvantages of Linked Lists:
1. Random access is not allowed in Linked Lists. We have to access elements sequentially starting from the first node. So, we cannot do a binary search with linked lists 
   efficiently with its default implementation. Therefore, lookup or search operation is costly in linked lists in comparison to arrays.
2. Extra memory space for a pointer is required with each element of the list.
3. Not cache-friendly. Since array elements are present at contiguous locations, there is a locality of reference which is not there in the case of linked lists.
 
### Types of Linked lists
* **Single Linked List**: It is the simplest type of linked list in which every node contains some data and a pointer to the next node of the same data type.
    The node contains a pointer to the next node means that the node stores the address of the next node in the sequence. A single linked list allows traversal of data only in
    one way. Below is the image for the same:

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200922124319/Singly-Linked-List1.png)


 **Representation :**

* A linked list is represented by a pointer to the first node of the linked list. The first node is called the head node of the list. If the linked list is empty, then the value of 
  the head node is NULL.
* Each node in a list consists of at least two parts:
1. data
2. Pointer (Or Reference) to the next node

In C/C++, we can represent a node using structure. Below is an example of a linked list node with integer data
```c++
struct Node
{
    int data;
    struct Node* next; 
};
```
In Java, LinkedList can be represented as a class, and the Node as a separate class. The LinkedList class contains a reference of the Node class type.
```java
class LinkedList 
{ 
    Node head;  // head of list 
  
    /* Linked list Node*/
    class Node 
    { 
        int data; 
        Node next; 
           
        // Constructor to create a new node 
        // Next is by default initialized 
        // as null 
        Node(int d) {data = d;} 
    } 
}
```

* **Doubly Linked List**: A doubly linked list or a two-way linked list is a more complex type of linked list which contains a pointer to the next as well as the previous node in
    sequence, Therefore, it contains three parts are data, a pointer to the next node, and a pointer to the previous node. This would enable us to traverse the list in the 
    backward direction as well. Below is the image for the same:
    
    ![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200922124412/Doubly-Linked-List.png)
    
    
**Representation :**
   
   Each node in a list consists of at least three parts:
   1. data
   2. Pointer (Or Reference) to the next node in DLL
   3. Pointer to the previous node in DLL
    
```c++
struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};
```

* **Circular Linked List:** A circular linked list is that in which the last node contains the pointer to the first node of the list. While traversing a circular liked list, we 
  can begin at any node and traverse the list in any direction forward and backward until we reach the same node we started. Thus, a circular linked list has no beginning and 
  no end. Below is the image for the same:
  
  ![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200922124456/Circular-Linked-List.png)
  
**Representation:**
```c++
struct Node
{
    int data;
    struct Node* next; 
};
```
 
