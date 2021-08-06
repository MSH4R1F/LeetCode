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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry = 0) {
        ListNode *nextnode;
        ListNode *temp = new ListNode(((l1->val+l2->val) % 10 + carry)% 10);
        nextnode = temp;
        carry = (l1->val+l2->val+carry) / 10;
        
        if (l1->next != NULL || l2-> next != NULL || carry != 0)
        {
            if (l1->next == NULL)
            {
                l1->next = new ListNode(0);
            }
            if (l2->next == NULL)
            {
                l2->next = new ListNode(0);
            }
            nextnode->next = addTwoNumbers(l1->next,l2->next,carry);
        }
        return nextnode;
    }
};

// Runtime: 24 ms, faster than 84.63% of C++ online submissions for Add Two Numbers.
Memory Usage: 71.7 MB, less than 10.79% of C++ online submissions for Add Two Numbers.//
