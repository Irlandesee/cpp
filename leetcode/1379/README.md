#PROBLEM DESCRIPTION:
Given two binary tres "Original" and "cloned" and given reference to a node target in the original tree.

The cloned tree is a copy of the original tree.

Return a reference to the same noede in the cloned tree.

Note that you are not allowed to change any of the two trees or the target node and the answer must a 
reference to a node in the cloned tree.

Follow up:Solve the problem if repeated values on the tree are allowed.


#EXAMPLE 1:
input, tree: [7,4,3,null,null,6,19], target = 3
output : 3
Explanation: In all examples the oringal and cloned trees are shown. The Target node is agreeen node from the original tree. The answer is the yellow node from the cloned tree.

#EXAMPLE 2:
input: tree [7], target = 7
output: 7

#EXAMPLE 3:
input : tree [8,null,6,null,5,null,4,null,3,null,2,null,1], target = 4
output = 4

#EXAMPLE 4: 
input : tree [1,2,3,4,5,6,7,8,9,10], target = 5
output : 5

#EXAMPLE 5:
input : tree [1,2,null,3], target = 2
output : 2

#CONSTRAINTS:
The number of nodes in the tree is in the range [1, 10ˆ4]
The values of the nodes of the tree are unique
target node is a node from the original tree and is not null
 