class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        先转置（三角形遍历），在横向逆转
        """
        n = len(matrix)
        for row in range(n):
            for col in range(row+1): # 三角形
                t = matrix[row][col]
                matrix[row][col] = matrix[col][row]
                matrix[col][row] = t
        
        for row in range(n):
            for i in range(int(n/2)):
                t = matrix[row][i]
                matrix[row][i] = matrix[row][n-i-1]
                matrix[row][n-i-1] = t
                
"""
Success
Details 
Runtime: 28 ms, faster than 95.44% of Python3 online submissions for Rotate Image.
Memory Usage: 14.3 MB, less than 62.99% of Python3 online submissions for Rotate Image.
Next challenges:
Subsets II
Duplicate Zeros
Matrix Diagonal Sum

"""
        
        