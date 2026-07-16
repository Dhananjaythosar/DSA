class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        arr = sorted(arr)
        d = arr[1] - arr[0]
        result = True
        for i in range(len(arr)-1):
            if (arr[i] + d) != arr[i+1]:
                result = False
        return result

        