#DESCRIPTION:
Write an efficient algorithm that searches for a value in a an m x n matrix.
This matrix has the following properties:
-> Integers in each row are sorted left to right
-> The first integer of each row is greater than the last integer of the previous row.

#EXAMPLE 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

#EXAMPLE 2:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

#CONSTRAINTS:
m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-10ˆ4 <= matrix[i][j], target <= 10ˆ4
