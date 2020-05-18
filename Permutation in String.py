# Day :18

from collections import Counter
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        from collections import Counter

        l1 = Counter(s1)
        ans=[]
        prev = 0
        for i in range(len(s1) , len(s2)+1):
            l2 = Counter(s2[prev:i])
            if (l2==l1):
                #ans.append(prev)
                return True
            prev +=1
            l2.clear()
        return False
        
