class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int c ,int res){
        int row = image.size() ,col = image[0].size();

        if (i < 0 || j < 0 || i >= row || j >= col || image[i][j] == c) return;

        if (image[i][j] == res){
            
            image[i][j] = c;

            dfs(image ,i+1 ,j ,c ,res);
            dfs(image ,i-1 ,j ,c, res);
            dfs(image ,i ,j+1 ,c, res);
            dfs(image ,i ,j-1 ,c, res);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int c) {
        dfs(image ,sr ,sc ,c ,image[sr][sc]);
        return image;
    }
};