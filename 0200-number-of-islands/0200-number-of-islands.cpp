class Solution {
public:
    void consumeIsland(int i,int j,int m,int n,vector<vector<char>>& grid){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]!='1') return;

        grid[i][j]='0';//most imp mark it is visited

        consumeIsland(i-1,j,m,n,grid);
        consumeIsland(i+1,j,m,n,grid);
        consumeIsland(i,j-1,m,n,grid);
        consumeIsland(i,j+1,m,n,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        //Dfs approach :popular one
        int m=grid.size();
        int n=grid[0].size();

        int islands=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    islands++;
                    consumeIsland(i,j,m,n,grid);
                }
            }
        }
        return islands;
    }
};