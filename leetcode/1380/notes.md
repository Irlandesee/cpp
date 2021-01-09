#problem descrpition:
Given a m * n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

#example 1:
input : matrix = [[3,7,8],[9,11,13],[15,16,17]]
Output: [15]

#example 2:
Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
Output: [12]

#example 3:
Input: matrix = [[7,8],[1,2]]
Output: [7]

#constraints:
m == mat.length
n == mat[i].length
1 <= n, m <= 50
1 <= matrix[i][j] <= 10^5
All elements in the matrix are distinct.