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
        int ct1,ct2;
        ct1 = 0; ct2 = 0;
        ListNode *temp1,*temp2;
        temp1 = headA;
        temp2 = headB;
        while(temp1!=NULL){
            ct1++;
            temp1 = temp1->next;
        }
        while(temp2!=NULL){
            ct2++;
            temp2 = temp2->next;
        }
        temp1 = headA;temp2 = headB;
        if(ct2>ct1){
            int k=0;
            while(k!=(ct2-ct1)){
                k++;
                temp2 = temp2->next;
            }
        }
        if(ct1>ct2){
            int k=0;
            while(k!=(ct1-ct2)){
                k++;
                temp1 = temp1->next;
            }
        }
        while(temp1!=NULL && temp2!=NULL){
            if(temp1==temp2)return temp1;
            else{
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        return NULL;
    }
};