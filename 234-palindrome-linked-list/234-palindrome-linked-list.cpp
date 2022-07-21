/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head,*prev=NULL,*next=NULL;
        while(head){
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head,*fast=head;
        
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(fast){
            slow=slow->next;//for odd number length linked list
        }
        
        fast=head;
        slow=reverse(slow);
        
        while(slow){
            if(fast->val!=slow->val){
                return false;
            }
            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }
};