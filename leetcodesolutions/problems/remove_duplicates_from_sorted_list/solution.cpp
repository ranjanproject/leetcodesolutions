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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return head;
        ListNode *temp,*prev;
        temp = head;
        prev = head;
        while(temp!=NULL){
            if(prev->val!=temp->val){
                prev->next = temp;
                prev = prev->next;
            }
            temp = temp->next;
        }
        prev->next = NULL;
        return head;
    }
};