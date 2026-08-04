class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        origin = [i for i in range(min(nums), max(nums)+1)]
        return sorted(list(set(origin) - set(nums)))