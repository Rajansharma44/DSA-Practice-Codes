class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true; // An empty tree is symmetric
        }

        return isMirror(root->left, root->right);
    }

    bool isMirror(TreeNode* leftSubtree, TreeNode* rightSubtree) {
        if (leftSubtree == nullptr && rightSubtree == nullptr) {
            return true; // Both subtrees are empty, so they are symmetric
        }

        if (leftSubtree == nullptr || rightSubtree == nullptr) {
            return false; // One subtree is empty while the other is not, so they are not symmetric
        }

        // Compare the values of the current nodes and recursively check the subtrees
        return (leftSubtree->val == rightSubtree->val) &&
               isMirror(leftSubtree->left, rightSubtree->right) &&
               isMirror(leftSubtree->right, rightSubtree->left);
    }
};

