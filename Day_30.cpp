//Image Overlap

class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<vector<int>>va,vb;
        int rows=img1.size();
        int cols=img1[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(img1[i][j]) va.push_back({i,j});
                if(img2[i][j]) vb.push_back({i,j});
            }
        }
        unordered_map<string,int>m;
        for(auto &pa:va){
            for(auto &pb:vb){
                string s = to_string(pa[0]-pb[0])+" "+to_string(pa[1]-pb[1]);
                m[s]++;
            }  
        }
        int ans=0;
        for(auto &it:m) ans=max(ans,it.second);
        return ans;
    }
};
