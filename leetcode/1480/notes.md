#problem description
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]...nums[i])
return the running sum of nums

#example 1:
input : nums = [1,2,3,4]
outut : [1,3,6,10]

explanation -> Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4]

#example 2:

input : nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].

#example 3:
Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]

#Constraints: 
1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6

