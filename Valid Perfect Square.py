# Day: 9

import math
class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        if not num: return False
        return int(num**(1/2)) * int(num**(1/2)) == num 
