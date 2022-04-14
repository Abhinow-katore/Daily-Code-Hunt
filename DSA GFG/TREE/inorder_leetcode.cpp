/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    void inorder(TreeNode *root, vector<int> &node)
    {
        vector<int> ans;
        // if(root->val==0){return 0};
        if (!root)
        {
            return;
        }
        inorder(root->left, node);
        node.push_back(root->val);
        inorder(root->right, node);
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> node;
        inorder(root, node);
        return node;
    }
};