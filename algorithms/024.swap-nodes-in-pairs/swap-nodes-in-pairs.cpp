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
    ListNode *swapPairs(ListNode *head) {
        if(head == NULL) return head;
        ListNode *res = head;
        if(res->next == NULL) {
        	return res;
        }else {
        	res = res->next;
        }
        ListNode *pos = new ListNode(1);
        pos->next = head;
        while(pos->next != NULL && pos->next->next != NULL) {
        	ListNode *tmp = pos->next;
        	pos->next = tmp->next;
        	tmp->next = tmp->next->next;
        	pos->next->next = tmp;
        	pos = tmp;
        }
        return res;
    }
};