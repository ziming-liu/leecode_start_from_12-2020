

```
203. Remove Linked List Elements
Easy

2512

122

Add to List

Share
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

 

Example 1:


Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
Example 2:

Input: head = [], val = 1
Output: []
Example 3:

Input: head = [7,7,7,7], val = 7
Output: []
 

Constraints:

The number of nodes in the list is in the range [0, 104].
1 <= Node.val <= 50
0 <= k <= 50

``` 



### solutoin 

因为有的case只包含要删除的元素，比如 [7,7,7,7] val=7. 因此， 我们先建一个空节点作为新的头结点， 这样，可以直接通过p.next删除所有元素。如果采用默认的第一个节点作为头结点，那么当头结点（第一个节点）就是要删除的value时，就要单独领出来判断头节点是否要保留。


### submit 


```
Success
Details 
Runtime: 64 ms, faster than 88.91% of Python3 online submissions for Remove Linked List Elements.
Memory Usage: 17.2 MB, less than 25.82% of Python3 online submissions for Remove Linked List Elements.
```





