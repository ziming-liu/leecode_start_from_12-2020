# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        if headA is None or headB is None:
            return None
        
        def get_len(head):
            l = 0
            while head is not None:
                head = head.next
                l = l+1
            return l
        
        LA = get_len(headA)
        LB = get_len(headB)
        diff = LA-LB if LA>=LB else LB-LA
        for i in range(diff):
            if LA>=LB: # List A move diff positions
                headA = headA.next
            else:
                headB = headB.next
        
        # find the intersection, now they are in same length
        
        while headA is not None and headB is not None and headA!=headB: # condition is headA!=headB!!not headA.val!=headB.val !!!
            headA = headA.next
            headB = headB.next
        
        return headA if headA is not None and headB is not None else None
        
            
            
## solution 2 


# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        A = headA
        B = headB
        while A!=B:
            A = A.next if A is not None else headB
            B = B.next if B is not None else headA 
        
        return A if A is not None and B is not None else None
        
            
            


