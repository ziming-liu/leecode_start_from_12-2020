/*

53. Maximum Subarray
Easy

10334

496

Add to List

Share
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [0]
Output: 0
Example 4:

Input: nums = [-1]
Output: -1
Example 5:

Input: nums = [-100000]
Output: -100000
 

Constraints:

1 <= nums.length <= 3 * 104
-105 <= nums[i] <= 105
 

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
Accepted
1,270,528
Submissions
2,673,142


*/



// python


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        _max=-9999999999
        _sum=0
        for i in range(len(nums)):
            _sum = max(nums[i],_sum+nums[i]) // 如果num i 加上 前面的sum还变小，sum成了累赘， 取 最大的那个作为新的sum
            _max = max(_max, _sum)

        return _max













