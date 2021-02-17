/*

28. Implement strStr()
Easy

2045

2176

Add to List

Share
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

 

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
Example 3:

Input: haystack = "", needle = ""
Output: 0
 

Constraints:

0 <= haystack.length, needle.length <= 5 * 104
haystack and needle consist of only lower-case English characters.
Accepted
788,391
Submissions
2,253,544


*/

实际是字符sub string匹配问题，返回index。
注意 开头 特例情况


class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle==""){
            return 0;
        }
        if(needle.size()>haystack.size()){
            return -1;
        }
        for(int i=0;i<haystack.size()-needle.size()+1;i++){
            int begin=i;
            int j;
            for(j=0;j<needle.size()&&haystack[begin]==needle[j];j++,begin++){}
            if(j==needle.size()){
                return i;
            }
        }
        return -1;
    }
};







