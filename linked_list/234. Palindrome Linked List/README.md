

```
234. Palindrome Linked List
Easy

4785

429

Add to List

Share
Given the head of a singly linked list, return true if it is a palindrome.

 

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false
 

Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9
 

Follow up: Could you do it in O(n) time and O(1) space?


```


### solution 

采用的解法

先通过快慢指针获取到链表的中间位置，然后逆转链表的后半部分， 再逐个比较链表前一半和逆转后的后一半。 实现空间复杂度O（1）

其他解法

通过stack先存储前一半链表即可。

### submit 

```
Details 
Runtime: 924 ms, faster than 5.18% of Python3 online submissions for Palindrome Linked List.
Memory Usage: 47.3 MB, less than 6.38% of Python3 online submissions for Palindrome Linked List.
Next challenges:
Palindrome Number

```



