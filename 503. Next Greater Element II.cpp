/*

503. Next Greater Element II
Medium

1985

83

Add to List

Share
Given a circular array (the next element of the last element is the first element of the array), print the Next Greater Number for every element. The Next Greater Number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, output -1 for this number.

Example 1:
Input: [1,2,1]
Output: [2,-1,2]
Explanation: The first 1's next greater number is 2; 
The number 2 can't find next greater number; 
The second 1's next greater number needs to search circularly, which is also 2.
Note: The length of given array won't exceed 10000.

Accepted
116,608
Submissions
201,588

*/




class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int s_len = nums.size();
        vector<int> out_nums;
        for(int i=0; i<s_len; i++){
            int tmp_val = nums[i];
            int flag=0;
            for(int j=i+1;j<s_len;j++){
                if(nums[j]>tmp_val){
                    flag = 1;
                    out_nums.push_back(nums[j]);
                    break;
                }
            }
            if(flag==0){
                for(int j=0;j<i;j++){
                    if(nums[j]>tmp_val){
                        flag = 1;
                        out_nums.push_back(nums[j]);
                        break;
                    }
                }
            }
            if(flag==0){
                out_nums.push_back(-1);
            }
            
        }
        
        return out_nums;
    }
};
