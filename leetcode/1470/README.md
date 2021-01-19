#PROBLEM DESCRIPTION:
Given the array nums consisting of 2n elements in the form of
[x_1, x_2, ..., x_n, y_1, y_2, ..., Y_n]
Return the array in the form [x_1, y_1, x_2, y_2, ..., x_n, y_n]

#EXAMPLE 1:
input:  nums = [2,5,1,3,4,7], n = 3
output: [2, 3, 5, 4, 1, 7]
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

#EXAMPLE 2:
Input: nums = [1,2,3,4,4,3,2,1], n = 4
Output: [1,4,2,3,3,2,4,1]

#EXAMPLE 3:
Input: nums = [1,1,2,2], n = 2
Output: [1,2,1,2]

#CONSTRAINTS:
1 <= n <= 500
nums.length == 2n
i <= nums[i] <= 10^3
