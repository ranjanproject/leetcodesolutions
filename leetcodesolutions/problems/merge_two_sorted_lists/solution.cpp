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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head, *temp;

        if(list1 != NULL && list2 != NULL){
          if(list1->val <= list2->val){
               head = list1;
               temp = head;
               list1 = list1->next;
          }else{
               head = list2;
               temp = head;
               list2 = list2->next;
          }   
        }else if(list1 == NULL){
               return list2;
        }else{
            return list1;
        }

        while(list1 != NULL && list2 != NULL){
          if(list1->val <= list2->val){
                temp->next = list1;
                temp = list1;
                list1 = list1 -> next;
          }else{
              temp->next = list2;
              temp = list2;
              list2 = list2->next;
          }   
        }

        if(list1 == NULL){
           temp -> next = list2;
        }else{
           temp -> next = list1;
        }

        return head;        
    }
};