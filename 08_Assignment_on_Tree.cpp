#include <iostream>
#include <vector>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (!root)
        {
            return nullptr; // Node not found, return null
        }

        if (root->val == val)
        {
            return root; // Node with value val found, return the subtree rooted at this node
        }

        if (val < root->val)
        {
            return searchBST(root->left, val); // Search in the left subtree
        }
        else
        {
            return searchBST(root->right, val); // Search in the right subtree
        }
    }
};