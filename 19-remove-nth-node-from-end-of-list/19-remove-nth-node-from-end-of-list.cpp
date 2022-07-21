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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=0;
        ListNode *temp=head;
        while(temp){
            length++;
            temp=temp->next;
        }
        int m=length-n;
        if(m<0){
            return NULL;
        }
        if (n == length) {

            // Return head->next
            return head->next;

        }
        if(length==1 and n==1){
            return NULL;
        }
        temp=head;
        int count=0;
        while(count<m-1 and temp){
            temp=temp->next;
            count++;
        }
        
        ListNode* curr=temp;
        ListNode* next=temp->next->next;
        
        curr->next=next;
        
        return head;
    }
};