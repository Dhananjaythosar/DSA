class Solution:

    def check_index_match(self, s: str, p: str, i: int, j: int) -> bool:
        if i < len(s) and j < len(p):
            if p[j] == s[i] or p[j] == '.':
                return True
        return False

    def hit_wildcard_pattern(self, p: str, j: int) -> bool:
        if j + 1 < len(p) and p[j + 1] == '*':
            return True
        return False

    def isMatch(self, s: str, p: str) -> bool: 
        S, P = len(s), len(p)

        stack = [(0,0)]
        seen = set()

        while stack:
            i, j = stack.pop()
            if (i, j) in seen: 
                continue
            seen.add((i, j))
            if i == S and j == P:
                return True
            elif i < S and j == P:
                continue
            
            is_match_at_index = self.check_index_match(s, p, i, j)
            is_wildcard = self.hit_wildcard_pattern(p, j)
            if not is_wildcard:
                if is_match_at_index:
                    stack.append((i + 1, j+ 1))
                else:
                    continue
            else:
                stack.append((i, j + 2))
                if is_match_at_index:
                    stack.append((i + 1, j))
        
        return False
