class Solution {
public:
    int sum(TreeNode* root , int s=0) {
        if(!root) return 0;
        s = s*10 + root->val;
        if(!root->left && !root->right) return s;
        return sum(root->left , s) + sum(root->right , s);
    }
    int sumNumbers(TreeNode* root) {
        return sum(root);
    }
};
