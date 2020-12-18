/*

1323. Maximum 69 Number
Easy

442

72

Add to List

Share
Given a positive integer num consisting only of digits 6 and 9.

Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).

 

Example 1:

Input: num = 9669
Output: 9969
Explanation: 
Changing the first digit results in 6669.
Changing the second digit results in 9969.
Changing the third digit results in 9699.
Changing the fourth digit results in 9666. 
The maximum number is 9969.
Example 2:

Input: num = 9996
Output: 9999
Explanation: Changing the last digit 6 to 9 results in the maximum number.
Example 3:

Input: num = 9999
Output: 9999
Explanation: It is better not to apply any change.
 

Constraints:

1 <= num <= 10^4
num's digits are 6 or 9.
Accepted
65,565
Submissions
84,175


*/


/*
Details 
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum 69 Number.
Memory Usage: 6.5 MB, less than 17.75% of C++ online submissions for Maximum 69 Number.
*/




class Solution {
public:
    int maximum69Number (int num) {
        vector<int> numarray;
        do{
            numarray.push_back(num%10);
            num /= 10;
        }while(num>0);
        for(int i=numarray.size()-1;i>=0;i--){
            if(numarray[i]!=9){
                numarray[i] = 9;
                break;
            }
        }
        int out = 0;
        for(int i=numarray.size()-1;i>=0;i--){
            if(out==0){
                out = numarray[i];
            }
            else{
                out = 10*out +  numarray[i];
            }
            
        }
        return out;
    }
};
