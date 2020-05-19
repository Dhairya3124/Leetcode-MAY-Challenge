# Day :1
# https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/

class Solution:
    def firstBadVersion(self, n):
        start=0
        final=n
        while start <= final :
            mid=  start + ((final-start)//2)
            
            if isBadVersion(mid) ^ isBadVersion(mid-1) : return mid
            
            elif isBadVersion(mid): final =mid-1
            
            else: start =mid+1
        return -1
