# Day : 17

from collections import Counter
class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        l1 = Counter(p)
        ans=[]
        prev = 0
        for i in range(len(p) , len(s)+1):
            l2 = Counter(s[prev:i])
            if (l2==l1):
                ans.append(prev)
            prev +=1
            l2.clear()
        return ans
