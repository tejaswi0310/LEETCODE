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
    bool hasCycle(ListNode *head) {
        if(!head){
            return false;
        }
        ListNode *hare=head;
        ListNode *turtle=head->next;
        
        while(hare and turtle and turtle->next)
        {
            if(hare==turtle){
                return true;
            }
            hare=hare->next;
            turtle=turtle->next->next;
        }return false;
    }
};