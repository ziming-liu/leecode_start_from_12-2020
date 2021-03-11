
```

141. Linked List Cycle
Easy

4205

593

Add to List

Share
Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

 

Example 1:


Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
Example 2:


Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
Example 3:


Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
 

Constraints:

The number of the nodes in the list is in the range [0, 104].
-105 <= Node.val <= 105
pos is -1 or a valid index in the linked-list.
 

Follow up: Can you solve it using O(1) (i.e. constant) memory?

```


### solutions

navive 

直接用一个列表记录走过的节点， 如果新遍历节点已经在列表里面了，说明有loop


slow fast points solution

 define a slow point, go 1 step each iter, define a fast point, go 2 steps each iter. 
 if there is a loop, they will meetup finally.



### submit

slow fast point
```
Success
Details 
Runtime: 48 ms, faster than 80.98% of Python3 online submissions for Linked List Cycle.
Memory Usage: 17.7 MB, less than 15.89% of Python3 online submissions for Linked List Cycle.

```
