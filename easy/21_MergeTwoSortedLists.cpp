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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        if(l1->val>l2->val){
            ListNode *temp=l1;
            l1=l2;
            l2=temp;
        }
        ListNode *head=l1;
        while(1){
            if(l1->next==NULL){
                l1->next=l2;
                break;
            }
            if(l1->next->val > l2->val){
                ListNode *temp=l1->next;
                l1->next=l2;
                l2=temp;
            }else{
                l1=l1->next;
            }
        }
        return head;
    }
};
