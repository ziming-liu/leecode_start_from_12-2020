/*


26. Remove Duplicates from Sorted Array
Easy

3344

6233

Add to List

Share
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Clarification:

Confused why the returned value is an integer but your answer is an array?

Note that the input array is passed in by reference, which means a modification to the input array will be known to the caller as well.

Internally you can think of this:

// nums is passed in by reference. (i.e., without making a copy)
int len = removeDuplicates(nums);

// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
 

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2]
Explanation: Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the returned length.
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4]
Explanation: Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively. It doesn't matter what values are set beyond the returned length.
 

Constraints:

0 <= nums.length <= 3 * 104
-104 <= nums[i] <= 104
nums is sorted in ascending order.
Accepted
1,244,203
Submissions
2,690,172



*/

核心思想  
p1 维护生成无冗余数组， p2负责寻找遍历原来数组
两个情况，当p1 p2所指value不同，将p2所指向的value放到p1的下一个位置
当value相同，p2循环向后遍历，直到找到下一个不同的值（在下一轮while中 进行赋值操作）
细节： p2循环要注意越界问题


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return nums.size();
        }
        
        int p1=0,p2=1;
        while(p2<nums.size()){
            if(nums[p1]!=nums[p2]){
                nums[++p1] = nums[p2++];
            }
            else{
                while(p2<nums.size()&&nums[p1]==nums[p2]){  // # 必须先判断越界，再比较大小，否则 数组访问会越界！
                    p2++;
                }
                if(p2==nums.size()){
                    break;
                }                
            }
            
        }
        
        return 1+p1;
    }
};





// python

class Solution:
    
    self.nums = [2398743974]
    tar_len - removeDup(&self.nums)
    no_dup_list = self.nums[:tar_len]
    def removeDuplicates(self, nums: List[int]) -> int:
        lens = len(nums)
        if(lens<2):
            return lens
        pre= 0
        p2 = 1
        while p2<lens:
            if nums[pre]!=nums[p2]:
                pre +=1
                nums[pre]=nums[p2]
                p2 +=1
            else:
                while p2<lens and nums[pre]==nums[p2]:  # 必须先判断越界，再比较大小，否则 数组访问会越界！
                    p2 +=1
                if p2==lens:
                    break;
        return pre+1;

























