/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // base cases
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        // when we found the first node of l1 > the first node of l2
        // then we swap the values on val
        if(l1->val > l2->val){
            std::swap(l1, l2);
        }
        // asigning first node of l1 into res
        // that is the final merged sorted linked list
        ListNode * res = l1;
        // iterating over both linked lists
        while(l1 != NULL && l2 != NULL){
            // asiging in every iteration the value is null of temp
            ListNode * temp = NULL;
            while(l1 != NULL && l1->val <= l2->val){
                temp = l1; // storing l1 in temp
                // moving l1 to the next node
                l1 = l1->next;
            }
            // then move in next node of temp and assign it l2
            temp->next = l2;
            std:swap(l1, l2);
        }
        return res;
        
    }
};