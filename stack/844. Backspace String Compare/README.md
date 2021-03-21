

```
844. Backspace String Compare
Easy

2341

112

Add to List

Share
Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
Example 3:

Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".
Example 4:

Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".
Note:

1 <= S.length <= 200
1 <= T.length <= 200
S and T only contain lowercase letters and '#' characters.
Follow up:

Can you solve it in O(N) time and O(1) space?

```


### solution 

考察基础的stack 进站出站， 对于python而言，用list来实现一个stack， [].append(), [1,1,1].pop(). 

‘#’代表即是出站， 其他字母时进站。 注意点， 当第一个字母就是‘#’，空stack是不能pop()的，要注意判断条件。

### submition

```
Success
Details 
Runtime: 32 ms, faster than 64.35% of Python3 online submissions for Backspace String Compare.
Memory Usage: 14.3 MB, less than 56.53% of Python3 online submissions for Backspace String Compare.
Next challenges:
Crawler Log Folder

```




