class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        //BFS traversal most intuitive approach
        int m=grid.size();
        int n=grid[0].size();
        int islands=0;

        int dr[]={0,0,1,-1};
        int dc[]={1,-1,0,0};

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    islands++;

                    queue<pair<int,int>>q;
                    q.push({i,j});
                    grid[i][j]='0';
                    //visited marked in grid itself
                    while(!q.empty()){
                        auto [r,c]=q.front();
                        q.pop();
                        for(int d=0;d<4;d++){
                            int nr=r+dr[d];
                            int nc=c+dc[d];

                            if(nr>=0 && nr<m && nc>=0 && nc<n){
                                if(grid[nr][nc]=='1'){
                                    q.push({nr,nc});
                                    grid[nr][nc]='0';
                                }
                            }
                        }
                    }
                }
            }
        }
        return islands;
    }
};