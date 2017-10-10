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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *res = head;
        ListNode *fast = head;
        ListNode *slow = head;
        while(n > 1) {
        	fast = fast->next;
        	--n;
        }
        ListNode *pre = slow;
        while(fast->next != NULL) {
        	fast = fast->next;
        	pre = slow;
        	slow = slow->next;
        }
        if(slow == head) {
        	return head->next;
        }
        pre->next = slow->next;
        return res;
    }
};
