class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor)return image;
        Fill(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
    void Fill(vector<vector<int>>& image, int sr, int sc,int color, int newColor)
    {
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size() || image[sr][sc]!=color)
        {
            return;
        }
        image[sr][sc]=newColor;
        Fill(image,sr-1,sc,color,newColor);
        Fill(image,sr+1,sc,color,newColor);
        Fill(image,sr,sc-1,color,newColor);
        Fill(image,sr,sc+1,color,newColor);
    }
};
