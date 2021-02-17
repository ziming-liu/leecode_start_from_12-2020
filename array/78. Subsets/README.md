```
78. Subsets
Medium

5257

108

Add to List

Share
Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.
Accepted
719,209
Submissions
1,107,065
```


### 思路
##### solution1 

以 subset的长度 为level层级， 使用递归， 递归的每一层 都是一个for循环遍历N种情况，N种情况即 数组nums中的N个元素分别添加到上一level数组的尾部。
```
for example,  [1,2,3]
level 0                              []
                       /            \               \

level 1         [1]                    [2]            [3]

               /   \                  /               /

level 2    [1,2]  [1,3]            [2,3]            

           /

level 3 [1,2,3]    

```
###### solution2

初始化 result数组  $[[]]$

循环原数组nums N次， 遍历N个元素

- 对每轮循环， 都copy一次当前result中的每个subset， 对于每个copy的新subset都添加 原始数组nums的第 i 个元素。 

每轮循环 都得到了一个新的result，（依次往每个subset尾部 ++ 第i个元素）
```
for example 

[1,2,3]

init  [[]]

+1  [[], copy([]).append(1)]

+2 [[], [1], copy([]).append(2), copy([1]).append(2) ]

+3 [[], [1], [2], [1,2] copy([]).append(3), copy([1]).append(3), copy([2]).append(3), copy([1,2]).append(3),]

```
### submit 

##### solution 1
```
Details 
Runtime: 24 ms, faster than 98.87% of Python3 online submissions for Subsets.
Memory Usage: 14.6 MB, less than 22.16% of Python3 online submissions for Subsets.
Next challenges:
Subsets II
Generalized Abbreviation
Letter Case Permutation
```

##### solutoin 2
```
Details 
Runtime: 24 ms, faster than 98.87% of Python3 online submissions for Subsets.
Memory Usage: 14.5 MB, less than 22.16% of Python3 online submissions for Subsets.
Next challenges:
Subsets II
Generalized Abbreviation
Letter Case Permutation
```