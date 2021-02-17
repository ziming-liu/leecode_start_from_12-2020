/*

125. Valid Palindrome
Easy

1659

3415

Add to List

Share
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
 

Constraints:

s consists only of printable ASCII characters.
Accepted
754,711
Submissions
1,997,139125. Valid Palindrome
Easy

1659

3415

Add to List

Share
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
 

Constraints:

s consists only of printable ASCII characters.
Accepted
754,711
Submissions
1,997,139

*/



class Solution {
public:
    bool isPalindrome(string s) {
        if(s==""){
            return true;
        }
        if(s.size()==1){
            return true;
        }
        if(s.size()==2&&s[0]==s[1]){
            return true;
        }
        // transfrom s to clean  string
        string clean_s="";
        for(int i=0;i<s.size();i++){
            char item = s[i];
            if(item>='a'&&item<='z'){
                clean_s +=item;
            }
            if(item>='A'&&item<='Z'){
                item +=32; // to lowletter
                clean_s +=item;
            }
            if(item>='0'&&item<='9'){
                clean_s +=item;
            }
        }
        
        // 
        int len_s = clean_s.size();
        int p=0,q=len_s-1;
        while(p<=q){
            if(clean_s[p]==clean_s[q]){
                p++;
                q--;
            }
            else{
                return false;
            }
        }
        return true;
        
        
    }
};













