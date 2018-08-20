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
    ListNode *deleteDuplicates(ListNode *head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *one = head;
        ListNode *two = head;
        while(two->next != NULL) {
        	two = two->next;
        	if(one->val == two->val) {
        		one->next = two->next;
        		
        	}else {
        		one = two;
        	}
        }
        return head;
    }
};
