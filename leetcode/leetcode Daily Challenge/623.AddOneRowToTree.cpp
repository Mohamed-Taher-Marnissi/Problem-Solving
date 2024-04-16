
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
     
    void addLevel(TreeNode* root , int v , int tar , int d) {
        if(!root) return;
        if(d == tar - 1) {
            root->left = new TreeNode(v,root->left,nullptr);
            root->right = new TreeNode(v,nullptr,root->right);
        }
        addLevel(root->left,v,tar,d+1);
        addLevel(root->right,v,tar,d+1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1) return new TreeNode(val,root,nullptr);
        addLevel(root , val , depth , 1);
        return root;
    }
};
