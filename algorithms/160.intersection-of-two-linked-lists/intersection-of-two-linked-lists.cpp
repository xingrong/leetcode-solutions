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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) {
        	return NULL;
        }
        ListNode *posA = headA;
        int countA = 1;
        while(posA->next != NULL) {
        	++countA;
        	posA = posA->next;
        }
        ListNode *posB = headB;
        int countB = 1;
        while(posB->next != NULL) {
        	++countB;
        	posB = posB->next;
        }
        if(posA != posB) return NULL;
        posA = headA;
        posB = headB;
        if(countA == countB) {
        	while(posA != NULL) {
        		if(posA == posB) return posA;
        		posA = posA->next;
        		posB = posB->next;
        	}
        }else if(countA > countB) {
        	int tmp = countA - countB;
        	while(tmp != 0) {
        		--tmp;
        		posA = posA->next;
        	}
        	while(posA != NULL) {
        		if(posA == posB) return posA;
        		posA = posA->next;
        		posB = posB->next;
        	}
        }else {
        	int tmp = countB - countA;
        	while(tmp != 0) {
        		--tmp;
        		posB = posB->next;
        	}
        	while(posB != NULL) {
        		if(posB == posA) return posB;
        		posB = posB->next;
        		posA = posA->next;
        	}
        }
        return NULL;
    }
};