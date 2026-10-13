class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        valid_pairs = ['()','[]','{}']
        for i in s:
            if i in '([{':
                stack.append(i)
            else:
                if not stack or (stack[-1] + i) not in valid_pairs:
                    return False
                stack.pop()
        return not stack