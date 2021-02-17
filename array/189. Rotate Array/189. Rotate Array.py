class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        if nums is None:
            return 
        if k==0:
            return 
        if len(nums)==1:
            return 
        if len(nums)<k:
            k = k%len(nums)
        n = len(nums)
        right= nums[-k:]
        nums[-n+k:] = nums[:n-k]
        nums[:k] = right
        
        
        