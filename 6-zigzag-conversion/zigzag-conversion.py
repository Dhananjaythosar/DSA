class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows==1: return s
        ans=['' for _ in range(numRows)]
        j,d=0,-1
        for i in range(len(s)):
            ans[j]+=s[i]
            if(j==0): d=1
            elif(j==numRows-1): d=-1
            j+=d
        return ''.join(ans)