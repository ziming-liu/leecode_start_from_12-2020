/*

217. Contains Duplicate
Easy

1349

811

Add to List

Share
Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Example 1:

Input: [1,2,3,1]
Output: true
Example 2:

Input: [1,2,3,4]
Output: false
Example 3:

Input: [1,1,1,3,3,4,3,2,4,2]
Output: true
Accepted
711,124
Submissions
1,258,484

*/


//c++

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> e;
        for(int i=0;i<nums.size();i++){
            if(e.count(nums[i])==0){
                e[nums[i]] = 1;
            }
            else if(e.count(nums[i])>0){
                return true;
            }
        }
        
        return false;
    }
};



//python
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        e = dict()
        for i in range(len(nums)):
            if nums[i] not in e.keys():
                e[nums[i]] =1
            elif e[nums[i]]>0:
                return True
        return False


