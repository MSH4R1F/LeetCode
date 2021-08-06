# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode, carry = 0) -> ListNode:
        nextNode = ListNode(((l1.val+l2.val) % 10 + carry) % 10)
        carry = (l1.val+l2.val + carry) // 10
       
        if l1.next != None or l2.next != None or carry != 0:
            if not(l1.next):
                l1.next = ListNode(0)
            if not(l2.next):
                l2.next = ListNode(0)
            nextNode.next = self.addTwoNumbers(l1.next,l2.next,carry)
        return nextNode
            
        
