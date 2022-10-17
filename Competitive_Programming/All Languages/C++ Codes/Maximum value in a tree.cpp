#include <bits/stdc++.h>
using namespace std;
//Created a struct
struct Node  
{ 
  int data; 
  Node *left; 
  Node *right; 
  Node(int k){
      data=k;
      left=NULL;
      right=NULL;
  }
};
//funtion to get the maximum//
int getTheMaximum(Node *root){
    if(root==NULL)
        return INT_MIN;
    else
        return max(root->data,max(getTheMaximum(root->left),getTheMaximum(root->right)));//recursive call to get the maximum value//
} 
int main(){
    
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    
    cout<<getTheMaximum(root);
}
