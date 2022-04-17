// // /**
// //  * Definition for a binary tree node.
// //  * struct TreeNode {
// //  *     int val;
// //  *     TreeNode *left;
// //  *     TreeNode *right;
// //  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// //  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// //  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// //  * };
// //  */
// // class Solution
// // {
// // public:
// //     void inorder(TreeNode *root, vector<int> &node)
// //     {
// //         vector<int> ans;
// //         // if(root->val==0){return 0};
// //         if (!root)
// //         {
// //             return;
// //         }
// //         inorder(root->left, node);
// //         node.push_back(root->val);
// //         inorder(root->right, node);
// //     }
// //     vector<int> inorderTraversal(TreeNode *root)
// //     {
// //         vector<int> node;
// //         inorder(root, node);
// //         return node;
// //     }
// // };
// // //
// // /**
// //  * Definition for a binary tree node.
// //  * struct TreeNode {
// //  *     int val;
// //  *     TreeNode *left;
// //  *     TreeNode *right;
// //  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// //  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// //  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// //  * };
// //  */
// // class Solution
// // {
// // public:
// //     bool isSymmetricfast(Node *rootleft, Node *rootright)
// //     {
// //         if (rootleft == NULL && rootright == NULL)
// //         {
// //             return true;
// //         }
// //         if (rootleft != NULL && rootright == NULL)
// //         {
// //             return false;
// //         }
// //         if (rootleft == NULL && rootright != NULL)
// //         {
// //             return false;
// //         }

// //         if (rootleft->data != rootright->data)
// //         {
// //             return false;
// //         }

// //         bool cnd1 = isSymmetricfast(rootleft->left, rootright->right);
// //         bool cnd2 = isSymmetricfast(rootleft->right, rootright->left);

// //         if (cnd1 == true && cnd2 == true)
// //         {
// //             return true;
// //         }
// //         else
// //         {
// //             return false;
// //         }
// //     }

// //     bool isSymmetric(TreeNode *root)
// //     {
// //         if (root == NULL)
// //         {
// //             return true;
// //         }
// //         return isSymmetricfast(root->left, root->right);
// //     }
// // }
// // }
// // ;
// class Solution
// {
// public:
//     int findClosestNumber(vector<int> &nums)
//     {
//         int first = 0;
//         int diff = Integer.MAX_VALUE;
//         for (int i = 0; i < arr.length; ++i)
//         {
//             int abs = Math.abs(arr[i]);
//             if (abs < diff)
//             {
//                 first = i;
//                 diff = abs;
//             }
//             else if (abs == diff && arr[i] > 0 && arr[first] < 0)
//             {
//                 // same distance to zero but positive
//                 first = i;
//             }
//         }
//     }
// };