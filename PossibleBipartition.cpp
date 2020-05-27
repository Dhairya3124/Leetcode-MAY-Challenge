class Solution {
public:
    vector<int>adj_list[2001];
    int col[2001];
    bool BFS(int src)
    {
        col[src]=0;
        queue<int>q;
       
        q.push(src);
        
        while(!q.empty())
        {
            int u=q.front();q.pop();
            for(auto v:adj_list[u])
            {
                if(col[v]==-1)
                {
                    col[v]=1-col[u];
                    q.push(v);
                }
                else if(col[v]!=1-col[u])
                    return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) 
    {
        memset(col,-1,sizeof(col));
        for(int i=0;i<dislikes.size();i++)
        {
            int u=dislikes[i][0];
            int v=dislikes[i][1];
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);   
        }
        for(int i=1;i<=N;i++)
        {
            if(col[i]==-1)
            {
               bool res= BFS(i);
                if(res==false)
                    return false;
            }
        }
        return true;
        
    }
};
