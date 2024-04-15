class Solution(object):
    def sumNumbers(self, root):
        def dfs(curr , num):
            if not curr:
                return 0
            num = num*10 + curr.val
            if not curr.right and not curr.left:
                return num
            return dfs(curr.left , num) + dfs(curr.right , num)
        return dfs(root , 0)   
