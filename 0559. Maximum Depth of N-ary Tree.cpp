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
    int maxDepth(Node* root) {
        if(root==NULL)
            return 0;
        
        if(root->children.size()==0)
            return 1;
        
        vector<int> v(root->children.size(),1);
        int i=0;
        for(auto x:root->children)
        {
            v[i++]+=maxDepth(x);
        }
        return *max_element(v.begin(),v.end());
    }
};
