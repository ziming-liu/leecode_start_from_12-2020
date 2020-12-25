/*

415. Add Strings
Easy

1409

332

Add to List

Share
Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.

Note:

The length of both num1 and num2 is < 5100.
Both num1 and num2 contains only digits 0-9.
Both num1 and num2 does not contain any leading zero.
You must not use any built-in BigInteger library or convert the inputs to integer directly.
Accepted
245,342
Submissions
510,545



*/


class Solution {
public:
    string addStrings(string num1, string num2) {
        string tmp;
        int p_num1 = num1.size()-1;
        int p_num2 = num2.size()-1;
        int forward = 0;
        while((p_num1>=0)&(p_num2>=0)){
            int a = num1[p_num1--]-'0';
            int b = num2[p_num2--]-'0';
            int digit =  (forward+a+b)%10+'0';
            forward = (forward+a+b)/10;
            tmp.insert(0,1,digit);
            
        }
        while(p_num1>=0){
            int digit = (forward+num1[p_num1]-'0')%10+'0';
            forward = (forward+num1[p_num1--]-'0')/10;
            tmp.insert(0,1,digit);
        }
        while(p_num2>=0){
            int digit = (forward+num2[p_num2]-'0')%10+'0';
            forward = (forward+num2[p_num2--]-'0')/10;
            tmp.insert(0,1,digit);
        }
        if(forward>0){
            tmp.insert(0,1,forward%10+'0');
        }
        return tmp;
        
        
        
    }
};
