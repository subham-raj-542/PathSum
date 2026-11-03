
class Solution {
public:
    bool sum(TreeNode* root, int total_sum, int x) {

        if(root == NULL) return false;

        total_sum += root->val;

        if(root->left == NULL && root->right == NULL) {
            return total_sum == x;
        }

        bool left = sum(root->left, total_sum, x);
        bool right = sum(root->right, total_sum, x);

        return left || right;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return sum(root, 0, targetSum);
    }
};
