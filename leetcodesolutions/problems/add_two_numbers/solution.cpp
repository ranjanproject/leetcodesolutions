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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *temp1,*temp2,*prev;
       int cr=0;
       temp1=l1;temp2=l2;
    while(temp1 && temp2){
        prev = temp1;
        int d =  (temp1->val + temp2->val + cr)/10;
        temp1->val = (temp1->val + temp2->val + cr)%10;
        cr = d;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(!temp1 && temp2){
        prev->next = temp2;
        temp1 = temp2;
        temp2 = NULL;
        while(temp1){
          prev = temp1;
          int d =  (temp1->val + cr)/10;  
          temp1->val = (temp1->val + cr)%10;
          cr = d;
          temp1 = temp1->next;
        }
    }
    if(temp1 && !temp2){
        while(temp1){
            prev = temp1;
          int d =  (temp1->val + cr)/10;  
          temp1->val = (temp1->val + cr)%10;
          cr = d;
          temp1 = temp1->next;
        }
    }
    if(cr!=0){
     prev->next = new ListNode(cr);
    }
        return l1;
    }
};