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
        ListNode* temp=new ListNode(0);
        
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        if(l1->val<l2->val){
            temp->val=l1->val;
            l1=l1->next;
        }else{
            temp->val=l2->val;
            l2=l2->next;
        }
        temp->next=mergeTwoLists(l1,l2);
        return temp;
    }
};
