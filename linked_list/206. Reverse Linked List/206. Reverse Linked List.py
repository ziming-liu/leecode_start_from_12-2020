

# 头插法 
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        p = head
        new_head = ListNode()
        while p is not None: 
            # 头插法
            t = p.next
            p.next = new_head.next
            new_head.next = p
            p = t
            
        return new_head.next

# recursion 

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:

            
    def reverseList(self, head: ListNode) -> ListNode:
        if head is None or head.next is None:
            return head
        
        out = self.reverseList(head.next)
        # reverse the arrow direction of current location
        head.next.next = head 
        head.next = None
        
        return out # out is the new head, the last node