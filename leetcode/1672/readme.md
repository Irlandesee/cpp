#PROBLEM DESCRIPTION:
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i_th customer has in j_th bank;
Return the wealth that the richest custumer has.

A coustumer's wealth is the amount of money they have in all their bank accounts.
The richest customer is the custumer that has the maxumum wealth.

#example 1:
Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.

#example 2:
Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10
Explanation: 
1st customer has wealth = 6
2nd customer has wealth = 10 
3rd customer has wealth = 8
The 2nd customer is the richest with a wealth of 10.

#example 3:
Input: accounts = [[2,8,7],[7,1,3],[1,9,5]]
Output: 17

#constraints:
m == accounts.length
n == accounts[i].length
i <= m, n <= 50
1 <= accounts[i][j] <= 100,3

#notes
i-> rows
j-> columns
