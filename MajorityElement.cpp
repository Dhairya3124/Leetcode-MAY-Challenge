class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto num : nums){
            if(m.find(num) == m.end())
                m[num] = 1;
            else
                m[num]++;
            if(m[num] > (nums.size()/2))
                return num;
        }
        return 0;
        
    }
};
