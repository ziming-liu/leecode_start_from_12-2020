```

22. Generate Parentheses
Medium

7149

312

Add to List

Share
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]
 

Constraints:

1 <= n <= 8
Accepted
688,013
Submissions
1,054,973
Seen this question in a real interview before?

Yes

No

```

### 思路
枚举所有情况的题目，立马想到 递归解法

用left 和right两个变量记录 （ 和 ）还剩几个， 递归的终止条件就是left==0 and right==0。 

ps， 由于一直要保证左右括号配对，如果某一层递归 left>right了，说明剩下的左括号更多了，没有那么多右括号去和它配对了，那结果肯定是不对滴了， 直接ruturn提前退出。


### submit

```

Details 
Runtime: 32 ms, faster than 86.23% of Python3 online submissions for Generate Parentheses.
Memory Usage: 14.7 MB, less than 11.27% of Python3 online submissions for Generate Parentheses.
Next challenges:
Letter Combinations of a Phone Number

```




