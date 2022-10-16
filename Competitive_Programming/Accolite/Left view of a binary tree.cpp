#include <iostream>
#include <list>
using namespace std;
 
// Data structure to store a binary tree node
struct Node
{
    int key;
    Node *left, *right;
 
    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};
 
// Iterative function to print the left view of a given binary tree
void leftView(Node* root)
{
    // return if the tree is empty
    if (root == nullptr) {
        return;
    }
 
    // create an empty queue and enqueue the root node
    list<Node*> queue;
    queue.push_back(root);
 
    // pointer to store the current node
    Node* curr = nullptr;
 
    // loop till queue is empty
    while (!queue.empty())
    {
        // calculate the total number of nodes at the current level
        int size = queue.size();
        int i = 0;
 
        // process every node of the current level and enqueue their
        // non-empty left and right child
        while (i++ < size)
        {
            curr = queue.front();
            queue.pop_front();
 
            // if this is the first node of the current level, print it
            if (i == 1) {
                cout << curr->key << " ";
            }
 
            if (curr->left) {
                queue.push_back(curr->left);
            }
 
            if (curr->right) {
                queue.push_back(curr->right);
            }
        }
    }
}
 
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    leftView(root);
 
    return 0;
}



//Output
//1 2 4 7
