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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* pre=NULL;
        ListNode* curr=head;
        while(curr){
            if(curr->val==val)
                if(curr==head)
                    head=head->next;
                else
                    pre->next=curr->next;
            else
                pre=curr;
            curr=curr->next;
        }
        return head;
    }
};
//[6,2,6,3,4,5,6]
