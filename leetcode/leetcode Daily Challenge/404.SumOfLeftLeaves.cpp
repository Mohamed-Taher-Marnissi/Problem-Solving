class Solution {
public:
    void getSum(TreeNode* root , int &s) {
        if(!root) return;
        if(root->left) {
            if(!root->left->left && !root->left->right) s+= root->left->val;
            getSum(root->left , s);
        }
        getSum(root->right , s);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int s = 0;
        getSum(root , s);
        return s;
    }
};
