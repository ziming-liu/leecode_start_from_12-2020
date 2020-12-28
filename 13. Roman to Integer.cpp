/*
13. Roman to Integer
Easy

2786

3836

Add to List

Share
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

Example 1:

Input: s = "III"
Output: 3
Example 2:

Input: s = "IV"
Output: 4
Example 3:

Input: s = "IX"
Output: 9
Example 4:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 5:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

Constraints:

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].
Accepted
839,267
Submissions
1,491,339



*/

// c++ 得到索引的知识
// 从后往前遍历， 如果碰到前一个小于后一个罗马字母的情况， 就是- ,否则是+

class Solution {
public:
    vector<char> symbol = {'I','V','X','L','C','D','M'};
    vector<int>  value = {1, 5, 10, 50, 100, 500, 1000};
        
        
    int char2idx(char tar){
            return find(symbol.begin(),symbol.end(), tar) - symbol.begin();
        }
    
    int romanToInt(string s) {
        
        if(s.size()==0){
            return 0;
        }
        
        int out=value[char2idx(s[s.size()-1])];
        for(int i=s.size()-2; i>=0; i--){
            if(value[char2idx(s[i])]>=value[char2idx(s[i+1])]){
                out += value[char2idx(s[i])];
            }
            else{
                out -= value[char2idx(s[i])];
            }
        }
        
        return out;
        
        
    }
};








//python

class Solution:
    
    
    def romanToInt(self, s: str) -> int:
        """ 
        dic = {'I':1, 'V' :5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000, 'IV':4, 'IX':9, 'XL':40, 'XC':90, 'CD':400, 'CM':900}
        if len(s)==0:
            return 0
        out =0
        i = len(s) -1
        while i>0:
            if(dic[s[i]]>dic[s[i-1]]):
                out += dic[s[i-1]+s[i]]
                i = i-2
            else:
                out += dic[s[i]]
                i = i-1
        if i==0:
            out += dic[s[0]]
        return out
    """ 
    
    
        # 维护两个数组， 对于输入string， 从后往前转换为int， 如果当前罗马字母>=下一个罗马字母，就直接相加，如果<就是减去当前罗马字母对应int。
        symbol = ['I','V','X','L','C','D','M'];
        value = [1, 5, 10, 50, 100, 500, 1000];
    
    
        if len(s)==0:
            return 0;
        
        out = value[symbol.index(s[-1])]
        for i in range(len(s)-2,-1,-1):
            if value[symbol.index(s[i])] >= value[symbol.index(s[i+1])]:
                out += value[symbol.index(s[i])]
            else:
                out -= value[symbol.index(s[i])]
            
        return out

    



