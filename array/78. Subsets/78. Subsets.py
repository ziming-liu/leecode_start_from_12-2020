
# solution 1  recursion

class Solution:
    def getsub(self, i, nums, subset, result):
        result.append(subset)
        new_subset = subset.copy() # must make a copy, OR python will change the same subset in memory. 
        for j in range(i,len(nums)): ## recursion is end when input i == len(nums)
            new_subset.append(nums[j]) ## add new one 
            self.getsub(j+1, nums, new_subset, result) # go to next levels 
            new_subset = subset[:len(new_subset)-1] ## delete that one
    
    def subsets(self, nums: List[int]) -> List[List[int]]:
        result = [] # final result
        nums = sorted(nums)
        self.getsub(0,nums,[],result)
        return result


# solution 2  non-recursion

class Solution:
    
    def subsets(self, nums: List[int]) -> List[List[int]]:
        result = [[]] # final result
        nums = sorted(nums)
        n = len(nums)
        for i in range(n):
            n_res = len(result)
            for j in range(n_res):
                result.append(result[j].copy()) # copy subsets in result itself
                result[-1].append(nums[i])

                
            
        return result