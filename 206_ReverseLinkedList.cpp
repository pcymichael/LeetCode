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
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head, *pre=NULL, *next=NULL;
        while(curr){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        return pre;
    }
};
