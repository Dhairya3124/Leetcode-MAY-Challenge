class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        vector<int>freq(N+1,0);
        
        for(auto t:trust)
        {
            freq[t[0]]--;
            freq[t[1]]++;
            
        }
        for(int i=1;i<=N;i++)
        {
            if(freq[i]==N-1)
                return i;
        }
        return -1;
    }
};
