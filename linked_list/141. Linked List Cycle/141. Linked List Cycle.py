
# navive solution 

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        pack = []
        while head is not None and head not in pack:
            pack.append(head)
            head = head.next
        if head is None:
            return False
        else:
            return True


# solution 2: slow fast points solution

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        # define a slow point, go 1 step each iter, define a fast point, go 2 steps each iter. 
        # if there is a loop, they will meetup finally.
        slow = head 
        fast = head
        while fast is not None and fast.next is not None: # if no loop, fast point is at end firstly.
            slow = slow.next 
            fast = fast.next.next
            if slow==fast:
                return True
        
        return False
# this solution is much faster......
    