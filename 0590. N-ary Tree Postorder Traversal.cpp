/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
   void traversal(Node* root,vector<int>& vec)
    {
        if(!root)
            return;
        for(Node* i:root->children)
        {
            traversal(i,vec);
        }
        vec.push_back(root->val);
    }
    vector<int> postorder(Node* root) 
    {
      vector<int> vec;
      traversal(root,vec);
        return vec;
     
    }
};
