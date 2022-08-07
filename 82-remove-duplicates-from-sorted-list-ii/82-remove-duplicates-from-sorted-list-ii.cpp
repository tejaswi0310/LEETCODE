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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL){
            return NULL;
        }
        if(!head->next){
            return head;
        }
        ListNode *temp=head->next;
        
        
        int val=head->val;
        
        
        if(val!=temp->val){
            head->next=deleteDuplicates(temp);
            return head;
        }
        else{
            while(temp and temp->val==val){
                temp=temp->next;
            }
            return deleteDuplicates(temp);
        }
    
    
    // return head;
    }
};