# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        slow, fast = head, head
        
        while fast.next and fast.next.next:
            slow = slow.next
            fast = fast.next.next
        
        if fast.next is not None: # len of the list is even, final fast is not last node
            return slow.next
        else:                     # len of the list is odd, final fast point is the last node
            return slow 