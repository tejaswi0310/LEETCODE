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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return NULL;
        
        ListNode *temp = head; int count = 0 , mid = 0;
        while(temp->next != NULL){
            count++;
            temp = temp->next;
        }
        
        if(count % 2 == 0)
            mid = count / 2;
        else
            mid = count / 2 + 1;
        
        temp = head; count = 1;
        while(count < mid){
            temp = temp->next;
            count++;
        }
        
        ListNode *temp1 = temp->next->next;
        ListNode *temp2 = temp->next;
        delete temp2;
        temp->next = temp1;
        
        return head;
    }
};