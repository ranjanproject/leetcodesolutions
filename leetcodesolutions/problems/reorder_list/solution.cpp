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

    ListNode* reverseList(ListNode* head) {
    
     ListNode *temp = head, *prev = NULL;

     while(head != NULL){
         head = head->next;
         temp->next = prev;
         prev = temp;
         temp = head;
     }
     
    return prev;
    }

    void reorderList(ListNode* head) {
        
        int count = 0;

        ListNode* temp = head;

        while(temp!=NULL){
            temp = temp->next;
            count++;
        }

        int mid = count/2;

        count = 0; 
        temp = head;

        while(count<mid){
            temp = temp->next;
            count++;
        }
        
        ListNode *temp2, *temp1;

        temp2 = temp->next;

        temp->next = NULL;
        
        temp2 = reverseList(temp2);
        
        temp1 = head;

        temp = head;

        while(temp2 != NULL && temp1 != NULL){
            temp1 = temp1->next;
            temp->next = temp2;
            temp2 = temp2->next;
            temp->next->next = temp1;
            temp = temp1; 
        }


    }

    
};