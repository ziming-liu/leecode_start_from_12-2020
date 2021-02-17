/*
Write a function that takes a string as input and reverse only the vowels of a string.

Example 1:

Input: "hello"
Output: "holle"
Example 2:

Input: "leetcode"
Output: "leotcede"
Note:
The vowels does not include the letter "y".

 

Accepted
250,690
Submissions
560,150
*/


class Solution {
public:
    string reverseVowels(string s) {
        vector<char> temp = {'a','A','e','E','i','I','o','O','u','U'};
        vector<char> vowels;
        for(int i=0;i<s.size();i++){
            // is vowel??
            int flag=0;
            for(int j=0;j<temp.size();j++){
                if(s[i]==temp[j]){
                    flag=1; 
                }
            }
            if(flag==1){
                vowels.push_back(s[i]);
                s[i] = '_';
            }
            
            
            
        }
        
        int p = vowels.size()-1;
        // reverse 
        for(int i=0;i<s.size();i++){
            if(s[i]=='_'){
                s[i] = vowels[p--];
            }
        }
        
        return s;
        
    }
};

