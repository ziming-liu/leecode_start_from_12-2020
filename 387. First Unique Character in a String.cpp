/* 
387. First Unique Character in a String
Easy

2489

129

Add to List

Share
Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode"
return 2.
 

Note: You may assume the string contains only lowercase English letters.

Accepted
650,247
Submissions
1,211,212


*/

// 两种解法，第一种时间复杂度 O（N），第二种 O（N^2）

class Solution {
public:
    int firstUniqChar(string s) {
        if(s==""){
            return -1;
        }
        if(s.size()==1){
            return 0;
        }
        vector<int> count(26); // 存储重复次数的数组
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(count[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
            
        /*
        if(s==""){
            return -1;
        }
        if(s.size()==1){
            return 0;
        }
        for(int i=0;i<s.size();i++){
            char now = s[i];
            int j;
            int flag=0;
            for(j=0;j<s.size();j++){
                if(s[j]==s[i]&&i!=j){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return i;
            }
        }
            
        return -1; //没有不重复的
        */
    }
};
