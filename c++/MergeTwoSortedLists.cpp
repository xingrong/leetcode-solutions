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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *res = NULL;
        ListNode *pos = NULL;
        if(l1 == NULL) {
        	res = l2;
        	return res;
        }
        if(l2 == NULL) {
        	res = l1;
        	return res;
        }
        if(l1->val <= l2->val) {
        	res = l1;
        	pos = l1;
        	l1 = l1->next;
        }else {
        	res = l2;
        	pos = l2;
        	l2 = l2->next;
        }
        while(l1 != NULL && l2 != NULL) {
        	if(l1->val <= l2->val) {
        		pos->next = l1;
        		pos = l1;
        		l1 = l1->next;
        	}else {
        		pos->next = l2;
        		pos = l2;
        		l2 = l2->next;
        	}
        }
        if(l1 == NULL) {
        	pos->next = l2;
        }else {
        	pos->next = l1;
        }
        return res;
    }
};
