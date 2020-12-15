/*

Given an array of string words. Return all strings in words which is substring of another word in any order. 

String words[i] is substring of words[j], if can be obtained removing some characters to left and/or right side of words[j].

 

Example 1:

Input: words = ["mass","as","hero","superhero"]
Output: ["as","hero"]
Explanation: "as" is substring of "mass" and "hero" is substring of "superhero".
["hero","as"] is also a valid answer.
Example 2:

Input: words = ["leetcode","et","code"]
Output: ["et","code"]
Explanation: "et", "code" are substring of "leetcode".
Example 3:

Input: words = ["blue","green","bu"]
Output: []
 

Constraints:

1 <= words.length <= 100
1 <= words[i].length <= 30
words[i] contains only lowercase English letters.
It's guaranteed that words[i] will be unique.
Accepted
30,844
Submissions
49,251

*/

class Solution {
public:
    bool is_substring(string str_main, string str_match){
        int i=0,j=0,z=0;
        
        if(str_main.size()<str_match.size()){ //调试很久的bug，缺少这一大小判断
            return false;
        }
        for(i=0;i<=(str_main.length()-str_match.length());i++){
            z = i;
            for(j=0;j<str_match.length()&&str_main[z]==str_match[j];z++,j++);
            if(j==str_match.length()){
                return true;
            }
        }
        return false;

    }
    
    vector<string> stringMatching(vector<string>& words) {
        vector<string>outputs;
        for(int i=0;i<words.size();i++){
            for(int pre=0; pre<words.size();pre++){
                if(pre!=i&&is_substring(words[pre],words[i])){
                    outputs.push_back(words[i]);
                    break;
                }
            }
           
        }
        return outputs;
        
    }
};



