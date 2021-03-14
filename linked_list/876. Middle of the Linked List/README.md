
```


876. Middle of the Linked List
Easy

2158

72

Add to List

Share
Given a non-empty, singly linked list with head node head, return a middle node of linked list.

If there are two middle nodes, return the second middle node.

 

Example 1:

Input: [1,2,3,4,5]
Output: Node 3 from this list (Serialization: [3,4,5])
The returned node has value 3.  (The judge's serialization of this node is [3,4,5]).
Note that we returned a ListNode object ans, such that:
ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, and ans.next.next.next = NULL.
Example 2:

Input: [1,2,3,4,5,6]
Output: Node 4 from this list (Serialization: [4,5,6])
Since the list has two middle nodes with values 3 and 4, we return the second one.
 

Note:

The number of nodes in the given list will be between 1 and 100.


```


### solution 


快慢指针找到中间节点。 注意点： 题目要求偶数长度时，返回两个中间节点的第二个， 因此， 需要通过判断fast point最后停止在last node还是倒数第二个node，来判断list长度是奇数偶数。


## submit

```

Details 
Runtime: 28 ms, faster than 83.72% of Python3 online submissions for Middle of the Linked List.
Memory Usage: 14.2 MB, less than 76.47% of Python3 online submissions for Middle of the Linked List.

```



