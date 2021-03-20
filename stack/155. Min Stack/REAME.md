
```

155. Min Stack
Easy

4756

443

Add to List

Share
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
 

Example 1:

Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
 

Constraints:

-231 <= val <= 231 - 1
Methods pop, top and getMin operations will always be called on non-empty stacks.
At most 3 * 104 calls will be made to push, pop, top, and getMin.


```

### solution

通过数组实现即可， 注意点： 为了self.getMin时 有O（1）的时间复杂度， 需要在push时直接保存stack的每个状态的min value。 

### submit 


```
Details 
Runtime: 64 ms, faster than 55.00% of Python3 online submissions for Min Stack.
Memory Usage: 19.7 MB, less than 10.82% of Python3 online submissions for Min Stack.
Next challenges:
Sliding Window Maximum
Max Stack

```







