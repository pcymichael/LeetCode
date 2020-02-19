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
    bool isPalindrome(ListNode* head) {
        stack<int> index;
        ListNode *curr=head;
        while(curr){
            index.push(curr->val);
            curr=curr->next;
        }
        while(head){
            if(head->val!=index.top())
                return false;
            head=head->next;
            index.pop();
        }
        return true;
    }
};	
