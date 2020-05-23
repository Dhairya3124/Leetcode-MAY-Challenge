class Solution {
public:
//     vector<int> intersection(vector<int>A,vector<int>B)
//     {
//         int l = max(A[0],B[0]);
//         int r=  min(A[1],B[1]);
//         if(l<=r) return {l,r};
        
//         return {};
//     }
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> res;
        for(int i=0,j=0;i<A.size() && j<B.size();)
        {
           
        
                    int l = max(A[i][0],B[j][0]);
                    int r=  min(A[i][1],B[j][1]);
                    if(l<=r){res.push_back(vector<int>{l,r});}
             if(A[i][1]<B[j][1]) ++i;
            else ++j;
       }
        return res;
    }
};        
     
