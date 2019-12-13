/*
雖然知道是對稱，也知道左右方向對應，但是一時想不到遞迴結數是以return true; 作結束點，所以還是偷看別人的解答了。
作法很簡單：
1.子node都為NULL的話就return true; 
2.子node並非都NULL，就return false;
3.遞迴呼叫。
如果能寫出來的話就好想很多 !!!  另外值得注意的是，是leftNode->val，而非leftNode.val，這需要注意。(*pp).x 和 pp->x 是等價的。
*/

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
    bool isSymmetric(TreeNode* root) {
        
        if(root==NULL){
            return true;
        }
        return check(root->left,root->right);
    }
    
    bool check(TreeNode* leftNode,TreeNode* rightNode){
        
        if(leftNode == NULL && rightNode ==NULL){
            return true;
        }
        else if (leftNode == NULL || rightNode ==NULL){
            return false;
        }
        
        return( (leftNode->val == rightNode->val)&&
               check(leftNode->left,rightNode->right)&&
               check(leftNode->right,rightNode->left) );
    }
    
};
