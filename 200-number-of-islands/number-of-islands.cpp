class Solution {
public:
    vector<vector<int>>vis;
    int n , m;
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    bool valid(int i , int j){  
        if(i>=0 && i<n && j>=0 && j<m && !vis[i][j])
            return 1;
        return 0;
    }
    void dfs(int i , int j , vector<vector<char>>& grid){
        vis[i][j]=1;
        for(int d=0;d<4;d++){
            int x = i+dx[d];
            int y = j+dy[d];
            if(valid(x,y) && grid[x][y]=='1')
                dfs(x,y,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        vis = vector<vector<int>>(n,vector<int>(m));

        int connected_components=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs(i,j,grid);
                    connected_components++;
                }
            }
        }
        return connected_components;
    }
};