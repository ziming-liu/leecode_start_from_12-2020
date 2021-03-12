# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# slow fast point + list reversing to keep the memory complexity be O(1)
class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        if head is None or head.next is None: # 这次必须考虑特例
            return True
        if head.next.next is None:
            if head.val == head.next.val:
                return True
            else:
                return False
        
        slow, fast, pre = head, head, head
        while fast.next is not None and fast.next.next is not None: # 该条件两个条件都是next 不为空！！！
            fast = fast.next.next
            slow = slow.next

        # slow is the mid pos 
        #mid_head = slow
        # 就地反转 reverse the last half list after mid_head (dont include mid_head)
        p = slow.next
        while p and p.next: # 头插p。next
            obj = p.next # obj 是当前要插入头结点后的节点
            p.next = obj.next
            # 头插
            obj.next = slow.next
            slow.next = obj
        
        # compare the first half and the last half
        slow = slow.next # dont compare the mid head

        while slow:
            if slow.val!=pre.val:
                return False
            slow = slow.next
            pre = pre.next
        
        return True
            
            
            