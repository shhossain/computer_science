    #include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int isbst(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isbst(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isbst(root->right);
    }
    else
    {
        return 1;
    }
}
struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)
    {
        return root;
    }
    else if (key > root->data)
    {
        return search(root->right, key);
    }
    else
    {
        return search(root->left, key);
    }
}
struct node *searchiter(struct node *root, int key)
{
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
struct node *inorderprecesdor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
struct node *deletion(struct node *root, int key)
{
    struct node *inper;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if (key > root->data)
    {
        root->right = deletion(root->right, key);
    }
    else if (key < root->data)
    {
        root->left = deletion(root->left, key);
    }
    else
    {
        inper = inorderprecesdor(root);
        root->data = inper->data;
        root->left = deletion(root->left, inper->data);
    }
    return root;
}

void insertion(struct node * root, int key){
    struct node * prev = (struct node *)malloc(sizeof(struct node));
    while(root!=NULL){
        prev = root;
        if(key == root->data){
            return ;
        }
        else if (key>root->data){
            root= root->right;
        }
        else{
            root = root->left;
        }
    }
    struct node * new = createnode(key);
    if(prev->data>key){
        prev->left = new;
    }
    else{
        prev->right=new;
    }
}

int main()
{
    struct node *p = createnode(7);
    struct node *p1 = createnode(5);
    struct node *p2 = createnode(8);
    struct node *p3 = createnode(4);
    struct node *p4 = createnode(6);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    // preorder(p);
    // printf("\n");
    // postorder(p);
    inorder(p);
    printf("\n");
    printf("%d\n", isbst(p));
    deletion(p, 4);
    inorder(p);
    inorder(p);
printf("\n");
printf("%d\n", isbst(p));
struct node * n = search(p,7);
if(n!=NULL){
    printf("found:%d\n", n->data);
}
else{
    printf("element not found\n");
}

struct node * k = searchiter(p,5);
if(k!=NULL){
    printf("found:%d\n", k->data);
}
else{
    printf("element not found\n");
}
inorder(p);
printf("\n");
printf("%d\n", isbst(p));
insertion(p,3);
inorder(p);
    return 0;
}
