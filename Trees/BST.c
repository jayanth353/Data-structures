#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int d;
	struct node*left,*right;
}bst;

bst*cnode(int key)
{
	bst*nn=(bst*)malloc(sizeof(bst));
	nn->d=key;
	nn->left=NULL;
	nn->right=NULL;
}

void inorder(bst*node)
{
	if(node==NULL) return;
		
		
		inorder(node->left);
				printf("%d\n",node->d);

		inorder(node->right);

}

 bst* insert(bst*node,int key)
 {
 	if(node==NULL)
 		return cnode(key);
 	if(key<node->d) 
 	node->left=insert(node->left,key);
 	if(key>node->d) node->right=insert(node->right,key);

 	return node;

 }
 int main()
{
    /*
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    bst* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
 
    inorder(root);
 
    return 0;
}
/*
Output:
20
30
40
50
60
70
80
*/
