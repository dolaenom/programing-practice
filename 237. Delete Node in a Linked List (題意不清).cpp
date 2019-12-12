/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val; 
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        if((!node)||!(node->next))
            return;
        else
        {
            node->val = node->next->val;
            node->next = node->next->next;
        }
    }
};
