//遞迴的思考真的很重要
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        int ans1 = 1 + maxDepth(root->left);
        int ans2 = 1 + maxDepth(root->right);
        
        return max(ans1,ans2);
    }
};
    
/*
1.左右子Node都沒東西才算到底
2.單一個Node要往兩方向去找。
3.取MAX的。

*/
