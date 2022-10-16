#include <iostream>

using namespace std;



/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == NULL) return NULL;
        if (copied.find(node) != copied.end()) { 
            return copied[node];
        }
        vector<Node*> nbs = {};
        Node* root = new Node(node->val, nbs);
        copied[node] = root; 
        for (const auto &n: node->neighbors) {
            root->neighbors.push_back(cloneGraph(n)); 
        }
        return root;
    }
    
private:
    unordered_map<Node*, Node*> copied;
};