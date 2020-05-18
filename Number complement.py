# Day : 4

class Solution:
    def findComplement(self, num: int) -> int:
        X = 1
        while num > X: X = X * 2 + 1
        return X - num
