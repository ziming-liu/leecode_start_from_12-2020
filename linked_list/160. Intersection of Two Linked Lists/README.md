```
160. Intersection of Two Linked Lists
Easy

5250

589

Add to List

Share
Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

For example, the following two linked lists begin to intersect at node c1:


It is guaranteed that there are no cycles anywhere in the entire linked structure.

Note that the linked lists must retain their original structure after the function returns.

 

Example 1:


Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
Output: Intersected at '8'
Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.
Example 2:


Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
Output: Intersected at '2'
Explanation: The intersected node's value is 2 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [1,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes before the intersected node in A; There are 1 node before the intersected node in B.
Example 3:


Input: intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
Output: No intersection
Explanation: From the head of A, it reads as [2,6,4]. From the head of B, it reads as [1,5]. Since the two lists do not intersect, intersectVal must be 0, while skipA and skipB can be arbitrary values.
Explanation: The two lists do not intersect, so return null.
 

Constraints:

The number of nodes of listA is in the m.
The number of nodes of listB is in the n.
1 <= m, n <= 3 * 104
1 <= Node.val <= 105
1 <= skipA <= m
1 <= skipB <= n
intersectVal is 0 if listA and listB do not intersect.
intersectVal == listA[skipA + 1] == listB[skipB + 1] if listA and listB intersect.
 

Follow up: Could you write a solution that runs in O(n) time and use only O(1) memory?

```


### solutoin

solution 1

首先计算两个链表的长度和其长度差， 然后两个链表末端对齐（即长的链表head向后走几个位置）。  然后循环逐个对比节点是否存在，是否相等（注意一定是对比node相等，而不是node.value相等）

solution 2 

题目中强调了两个链表不会成环形。 利用该特性，我们可以得到一个方法： 将两个链表两种顺序拼接后，两个指针分别一一比较， 则必定有最早的相等的节点被找到。 例子如下图。



![example](41dfbc32fad85cd6636ad8603997821.jpg)

### submit

submition 1
```
Details 
Runtime: 168 ms, faster than 44.28% of Python3 online submissions for Intersection of Two Linked Lists.
Memory Usage: 29.4 MB, less than 88.00% of Python3 online submissions for Intersection of Two Linked Lists.
Next challenges:
Minimum Index Sum of Two Lists

```

submit 2 

```
Details 
Runtime: 164 ms, faster than 61.44% of Python3 online submissions for Intersection of Two Linked Lists.
Memory Usage: 29.5 MB, less than 66.09% of Python3 online submissions for Intersection of Two Linked Lists.
Next challenges:
Minimum Index Sum of Two Lists
```