/*

283. Move Zeroes
Easy

4797

148

Add to List

Share
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations.
Accepted
1,008,886
Submissions
1,727,414


*/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int p1=0,p2=0; p2<nums.size();p2++ ){  // 该种解法 和 去数组冗余重复的 题目一样思路
            if(nums[p2]!=0){
                std::swap(nums[p1++],nums[p2]);
            }
            
        }
        
        /*
        两个指针各自找0和非0，循环遍历次数大于数组长度。 非最优时间复杂度
        int p1=0,p2=0;
        while(true){
            while(p1<nums.size()&&nums[p1]!=0){ // find nums p1 ==0
                p1++;
            }
            p2=p1;                              // p2必须在p1后面，保证是将0交换到数组后面
            while(p2<nums.size()&&nums[p2]==0){ // find nums p2 != 0， 找到p1后面最近的 非0， 留作交换
                p2++;
            }
            if(p2==nums.size()){break;}
            int temp;
            temp  = nums[p1]; nums[p1] = nums[p2]; nums[p2] = temp;
            
        }
        */
        
    }
};


