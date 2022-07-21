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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* first=headA, *second=headB;
        
        while(first!=second){
            if(first){
                first=first->next;
            }
            else if(!first){
                first=headB;
            }
            if(second){
                second=second->next;
            }
            else if(!second){
                second=headA;
            }
        }
        return first;
    }
};