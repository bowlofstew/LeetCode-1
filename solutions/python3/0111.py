# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def minDepth(self, root: TreeNode) -> int:
        if not root:
            return 0

        ret = 0
        q = collections.deque([root])

        while q:
            ret += 1
            for i in range(len(q)):
                node = q.popleft()
                if not node.left and not node.right:
                    return ret
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)

        return -1