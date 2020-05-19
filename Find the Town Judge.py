# Day : 10

class Solution:
    def findJudge(self, N: int, trust: List[List[int]]) -> int:
        trusts = [0] * (N+1)
        for (a, b) in trust:
            trusts[a] -= 1
            trusts[b] += 1
            
        for i in range(1, len(trusts)):
            if trusts[i] == N-1:
                return i
        return -1
