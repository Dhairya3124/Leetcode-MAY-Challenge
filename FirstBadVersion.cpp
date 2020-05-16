class Solution {
public:
    int firstBadVersion(int n) {
        long hi=n,lo=1;
        long mid,ans;
        
        while(hi>=lo){
            mid=(hi+lo)/2;
        if(isBadVersion(mid) == true){
            ans = mid;
            hi = mid-1;
        }else
            lo = mid+1;
            }
        return ans;
    }
};
