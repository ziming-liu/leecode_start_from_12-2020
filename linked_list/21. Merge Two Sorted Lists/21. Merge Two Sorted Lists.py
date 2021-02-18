# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        head = ListNode()
        p = head
        while l1  and l2:
            if l1.val < l2.val:
                p.next = ListNode(l1.val, )
                p = p.next
                l1 = l1.next
            elif l2.val < l1.val:
                p.next = ListNode(l2.val, )
                p = p.next
                l2 = l2.next
            else:
                p.next = ListNode(l2.val, )
                p = p.next
                l2 = l2.next
                p.next = ListNode(l1.val, ) 
                p = p.next
                l1 = l1.next
        
        while l1:
            p.next = ListNode(l1.val)
            p = p.next
            l1 = l1.next
        while l2:
            p.next = ListNode(l2.val)
            p = p.next
            l2 = l2.next
        
        return head.next
            