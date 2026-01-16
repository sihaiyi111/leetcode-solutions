/**
 * Problem: Check Root Equals Sum of Children (LeetCode #2236)
 * Given a binary tree with exactly 3 nodes, check if the root value 
 * is equal to the sum of its two children's values.
 * 
 * Example:
 *       10
 *      /  \
 *     4    6   -> 4+6=10 -> return true
 * 
 * Approach:
 * - Access left and right child using pointer arrow syntax: -> 
 * - Compare root->val with (left->val + right->val)
 * 
 * Note: The tree has exactly 3 nodes, so no null checks needed.
 * 
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

bool checkTree(struct TreeNode* root) {
    if (root->val == root->left->val + root->right->val) {
        return true; 
    }
    return false;  
}
