

```

83. Remove Duplicates from Sorted List
Easy

2340

143

Add to List

Share
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

Example 1:


Input: head = [1,1,2]
Output: [1,2]
Example 2:


Input: head = [1,1,2,3,3]
Output: [1,2,3]
 

Constraints:

The number of nodes in the list is in the range [0, 300].
-100 <= Node.val <= 100
The list is guaranteed to be sorted in ascending order.

```



### solution 

循环向后遍历，遇到next node 与当前node一样，跳过next node 指向next next node。 如果不一样，则当前node向走一步。


### submit  

``` 
Details 
Runtime: 32 ms, faster than 98.64% of Python3 online submissions for Remove Duplicates from Sorted List.
Memory Usage: 14.2 MB, less than 85.07% of Python3 online submissions for Remove Duplicates from Sorted List.
Next challenges:
Remove Duplicates from Sorted List II

```
