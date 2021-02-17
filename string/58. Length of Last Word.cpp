/*
Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.

A word is a maximal substring consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Example 2:

Input: s = " "
Output: 0
 

Constraints:

1 <= s.length <= 104
s consists of only English letters and spaces ' '.
Accepted
452,495
Submissions
1,358,147

*/


class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==0){
            return(0);
        }
        int i=s.size()-1;
        int count=0;
        while(s[i]==' '&&i>0)i--;
        for(;s[i]!=' '&i>=0;i--)++count;
        return(count);
    }
};

