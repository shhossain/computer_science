#include <stdio.h>
#include <stdlib.h>
//decalaring double linked list as the node of BST
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
//creating a node with the given data for BST
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;//left child is NULL
    n->right = NULL;//right child is NULL
    return n;
}
//preorder traversal in BST
void preorder(struct node *root)
{
    if (root != NULL)
    {
    	//first print the root node
        printf("%d ", root->data);
        // then recursively travel to the left child
        preorder(root->left);
        //recursively travel through yhe right child
        preorder(root->right);
    }
}
// postorder traversal in BST
void postorder(struct node *root)
{
    if (root != NULL)
    {
    	// first left child then right child and then root node
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
//inorder traversal in BST
void inorder(struct node *root)
{
    if (root != NULL)
    {
    	//first left child then root node and then right child
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
//function to check whether a tree is BST or not
int isbst(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
    	//if left child is not BST then return 0
        if (!isbst(root->left))
        {
            return 0;
        }
        //if data of previous note is bigger than the current root node , return 0
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        //incrementing previous node to current root node
        prev = root;
        //check for right child, whether it is BST or not
        return isbst(root->right);
    }
    else
    {
        return 1;
    }
}
//searching the element recursively
struct node *search(struct node *root, int key)
{
	//if no root node available
    if (root == NULL)
    {
        return NULL;
    }
    //if the searching element is in the root node
    if (key == root->data)
    {
        return root;
    }
    //if key is bigger then root data then it must be on right side of BST
    else if (key > root->data)
    {
        return search(root->right, key);
    }
    //if ket is lesser than root data then it must be on left side of BST
    else
    {
        return search(root->left, key);
    }
}
//search iteratively using loop
struct node *searchiter(struct node *root, int key)
{
	//iterate until ir reaches to the last
    while (root != NULL)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}
//to delete the root node inorderprecesedor is placed at the root node
struct node *inorderprecesdor(struct node *root)
{
	//make left child of the root as root
    root = root->left;
    //inorderprecesdor of root element is the roght most element of the left child of root
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
//deleting the root node and adjustint inorderprecesdor in place of root node
struct node *deletion(struct node *root, int key)
{
    struct node *inper;
    if (root == NULL)
    {
        return NULL;
    }
    //if only root node is there in tree
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    //if key is on right side
    if (key > root->data)
    {
        root->right = deletion(root->right, key);
    }
    //if key is on left side
    else if (key < root->data)
    {
        root->left = deletion(root->left, key);
    }
    //if ket found
    else
    {
    	//make the new node and give it inorederprecesdor data
        inper = inorderprecesdor(root);
        //se
