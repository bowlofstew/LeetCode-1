# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if not p or not q:
            return p == q
        return p.val == q.val and \u005C
            self.isSameTree(p.left, q.left) and \u005C
            self.isSameTree(p.right, q.right)