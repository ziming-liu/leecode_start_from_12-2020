"""
541. Reverse String II
Easy

549

1532

Add to List

Share
Given a string and an integer k, you need to reverse the first k characters for every 2k characters counting from the start of the string. If there are less than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and left the other as original.
Example:
Input: s = "abcdefg", k = 2
Output: "bacdfeg"
Restrictions:
The string consists of lower English letters only.
Length of the given string and k will in the range [1, 10000]
"""



class Solution:
    def reverse(self,s):
        n = len(s)
        for i in range(int(n/2)):
            tmp = s[i]
            s[i] = s[n-i-1]
            s[n-i-1] = tmp
        return s
    
    def reverseStr(self, s: str, k: int) -> str:
        s = list(s)
        n = len(s)
        if n<=k:
            return "".join(self.reverse(s))
        
        
        for i in range(0,n,2*k):
            s[i:i+k]= self.reverse(s[i:i+k])
        return "".join(s)