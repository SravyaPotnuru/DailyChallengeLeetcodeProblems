//Where Will the Ball Fall

class Solution {
public:
    int m,n,dp[105][105];
    bool isvalid(int x,int y){
    return(x>=0 && x<n && y>=0 && y<m);
    }
    int ok(vector<vector<int>>& grid,int r,int c){
        if(r==n) return c;
        if(isvalid(r,c)){
            if(grid[r][c]!=-1&&isvalid(r,c+1)&&grid[r][c+1]!=-1){
                if(dp[r+1][c+1]!=-2) return dp[r+1][c+1];
                else return dp[r+1][c+1]=ok(grid,r+1,c+1);
            }
        }
        if(grid[r][c]!=1&&isvalid(r,c-1)&&grid[r][c-1]!=1){
                if(dp[r+1][c-1]!=-2) return dp[r+1][c-1];
                else return dp[r+1][c-1]=ok(grid,r+1,c-1);
            }
        
        return -1;
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<=101;i++){
          for(int j=0;j<=101;j++){
              dp[i][j]=-2;
          }
        }
        vector<int>ans(m);
        for(int i=0;i<m;i++){
            ans[i]=ok(grid,0,i);
        }
        return ans;
    }
};
