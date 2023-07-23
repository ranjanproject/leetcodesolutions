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
        
        ListNode *slow = head, *fast = head;
     
    //  if(slow ==NULL || slow->next == NULL)return false;

        while(slow!=NULL && fast!=NULL && fast->next !=NULL){
            if(slow->next == fast->next->next)return true;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return false;
    }
};