class Solution {
public:
 vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {

    priority_queue<pair<int,int>> pq;
    vector<vector<int>> ans;
    int N = (int)points.size();
    
    for(int i=0; i<N; i++)
    {
        int val = (points[i][0]*points[i][0]) + (points[i][1]*points[i][1]);
        pq.push({val,i});
        if((int)pq.size() > K)
            pq.pop();
    }
    
    while(!pq.empty())
    {
        ans.push_back(points[pq.top().second]);
        pq.pop();
    }
    
    return ans;
    
}
};
