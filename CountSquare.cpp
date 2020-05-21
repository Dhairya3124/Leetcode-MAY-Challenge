//The solution is based on the concepts of Dynamic Programming
class Solution {
public:
    int countSquares(vector<vector<int>>& m) {
        int r=m.size(),c=m[0].size(),ans=0;
        for(int i=1 ; i<r ; i++)
            for(int j=1 ; j<c ; j++)
                if(m[i][j]) m[i][j]=min(m[i-1][j],min(m[i][j-1],m[i-1][j-1]))+1; 
        
		for(int i=0 ; i<r ; i++)
            for(int j=0 ; j<c ; j++)
                ans+=m[i][j];
        return ans;
    }
};
